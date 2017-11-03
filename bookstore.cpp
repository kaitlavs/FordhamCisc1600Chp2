// Kaitlyn Lavan
// Sept. 22, 2017
// code that tells the user the price of their books and displays a receipt 

#include <iostream>
using namespace std; 

int main()
{

	cout << "Welcome to the Bronx Bookstore!" << endl;

	// variables
	int cBook, hBook, sBook; 
	double costcBook, costhBook, costsBook, totalOrderCost, amountPayed, totalOrderWithTax, tax, change;
	string name; 

	//init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//input 
	cout << "Enter your first name : ";
	cin >> name;
	cout << "Enter the number of Cervantes books : ";
	cin >> cBook; 
	cout << "Enter the number of Homer books : ";
	cin >> hBook;
	cout << "Enter the number of Shakespeare books: ";
	cin >> sBook;

	//output and processing
	costcBook = cBook * 41.25;
	costhBook = hBook * 15.85;
	costsBook = sBook * 30.50;
	totalOrderCost = costcBook + costhBook + costsBook;
	totalOrderWithTax = (totalOrderCost * .10) + totalOrderCost;
	tax = totalOrderWithTax - totalOrderCost; 
	cout << "Total cost of order is : $" << totalOrderWithTax << endl; 

	//input
	cout << "How much money will you pay? $" ;
	cin >> amountPayed;
	
	//processing change
	change = amountPayed - totalOrderWithTax;

	//output and receipt
	cout << "                                  " << endl;
	cout << "---------                         " << endl;
	cout << "Customer : " << name << endl;
	cout << "---------                         " << endl;
	cout << "Item           Number      Price  " << endl;
	cout << "Cervantes      " << cBook << "          $"  << costcBook << endl; 
	cout << "Homer          " << hBook << "          $"  << costhBook << endl;
	cout << "Shakespeare    " << sBook << "          $"  << costsBook << endl;
	cout << "--------                          " << endl;
	cout << "Tax                       $" << tax << endl;
	cout << "--------                          " << endl;
	cout << "Total                     $" << totalOrderWithTax << endl; 
	cout << "User Pay                  $" << amountPayed << endl;
	cout << "--------                          " << endl;
	cout << "Change                    $" << change << endl;

return 0;
}
		
