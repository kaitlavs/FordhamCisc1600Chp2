// Kaitlyn Lavan
// Sept. 26, 2017
// code for homework #3 to calculate salary 

#include <iostream>
using namespace std;

int main()
{

	//variables
	int hoursWorked, dependents; 
	double grossPay, ssTax, fedTax, stateTax, unionDues, insurance, takeHome;
	char rerun; 

	//init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	do
	{ 
		//input
		cout << "Enter the number of hours works : ";
		cin >> hoursWorked;
		cout << " Enter the number of dependents : ";
		cin >> dependents;

		//output and processing for gross pay 
		if (hoursWorked <= 40)
		{	
			grossPay = hoursWorked * 16.78; 
		}
		else 
		{	
			grossPay = (40 * 16.78) + (16.78 *1.5 * (hoursWorked - 40));
		}
		cout << "   " << endl;
		cout << "   " << endl;
		cout << "   " << endl;
		cout << "          Gross pay is             " << grossPay << endl;
		cout << "   " << endl;

		//output and processing for withdrawals 
		ssTax = grossPay * .06;
		cout << "             SS tax is            -" << ssTax << endl;
		fedTax = grossPay * .14;
		cout << "            Fed tax is            -" << fedTax << endl;
		stateTax = grossPay * .05;
		cout << "          State tax is            -" << stateTax << endl;
		unionDues = 10.00;
		cout << "         Union dues is            -10.00" << endl;
		if (dependents >= 3)
		{
			insurance = 35.00;
			cout << "          Insurance is            -" << insurance << endl;
		}	
		else 
		{
			insurance = 0.00;
			cout << "          Insurance is            -" << insurance << endl;
		}	

		//output and processing for take home pay
		takeHome = grossPay - (ssTax + fedTax + stateTax + unionDues + insurance);
		cout << "        " << endl;
		cout << "      Take home pay is            " << takeHome << endl;

		//repeat program 
		cout << "     " << endl;
		cout << "     " << endl;
		cout << "Would you like to run another calculation? Y=yes N=no : ";
		cin >> rerun;
	}	while (rerun == 'Y' || rerun == 'y');
	 

return 0;
}

