// Kaitlyn Lavan
// Sept. 19, 2017
// code to practice if-then-elsei


#include <iostream>
using namespace std;

int main()
{
	// variables
	int hours;
	double grossPay, rate;

	// input
	cout << "Enter the number of hours you worked this week : "; 
	cin >> hours;
	cout << "                     Enter your hours pay rate : ";
	cin >> rate;

	//processing
	if (hours <= 40)
	{
	   grossPay = hours * rate;
	}
	else
	{
	  grossPay = (40 * rate) + (rate * 1.5 * (hours - 40));
	}
	
	//output 
	cout << "Your gross pay is " << grossPay << endl;

	return 0;
}
