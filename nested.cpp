// Kaitlyn Lavan
// Sept. 22, 2017
// code to demo nested if-then-else

#include <iostream>
using namespace std;

int main()
{
	//variables
	int month;

	//input
	cout << "Enter a month number (1 - 12) : "; 
	cin >> month;

	//processing and output
	if (month == 1)
	   cout << "January" << endl;
	else if (month == 2)
	   cout << "February" << endl;
	else if (month == 3)
	   cout << "March" << endl;
	else if (month == 4)
	   cout << "April" << endl;
	else if (month == 5)
	   cout << "May" << endl;
	else if (month == 6)
	   cout << "June" << endl;
	else if (month == 7)
	   cout << "July" << endl;
	else if (month == 8)
	   cout << "August" << endl;
	else if (month == 9)
	   cout << "September" << endl;
	else if (month == 10) 
	   cout << "October" << endl;
	else if (month == 11) 
	   cout << "November" << endl;
	else if (month == 12)
	   cout << "December" << endl;
	else 
	   cout << "Sorry! You have entered an invalid month number!" << endl;

	cout << "Have a nice day!" << endl;

return 0;
}
