//Kaitlyn Lavan
//Sept. 30, 2017
//code to do a shipping kiosk

#include <iostream>
using namespace std;

int main()
{
	//variables
	double weight, cost;
	char rerun;
do 
{
	//input 
	cout << "Enter the weight of your package : ";
	cin >> weight;

	//processing error conditions 
	if (weight <= 0)
	{
		cout << "Sorry! you have entered invalid data." << endl;
		return 0;
	}

	//processing good conditions 
	if (weight > 0 && weight <= 1)
		cost = 2.00;
	else if (weight > 1 && weight <= 5)
		cost = 5.00;
	else if (weight > 5 && weight <= 10)
		cost = 10.00;
	else if (weight > 10 && weight <= 20)
		cost = 20.00;
	else 
	{
		cout << "Sorry! We cannot ship this package. " << endl;
		cout << "Package over 20 Lbs."                 << endl;
		return 0;
	}
	
	//output
	cout << "Your cost to ship will be " << cost << " dollars " << endl;

	//recalculation
	cout << "Like to rerun? Y=Yes N=No : ";
	cin >> rerun;

	} while (rerun == 'Y' || rerun == 'y');

return 0;
}

