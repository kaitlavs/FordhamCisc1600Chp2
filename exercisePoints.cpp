// Kaitlyn Lavan
// October 3, 2017
// code that calculates the total grade for N exercises 

#include <iostream>
using namespace std;

int main()
{
	//variables
	int counter, exercise, correct, totalCorrect, possible, totalPossible;
	double percent; 

	//init
	totalCorrect =  0;
	totalPossible = 0;
	exercise = 1;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//input
	cout << "How many exercises to input? ";
	cin >> counter;

	//processing while
	while (counter > 0)
	{
		cout << "  " << endl;
		cout << "Score receieved for exercise " << exercise << " : ";
		cin >>  correct;
		totalCorrect = totalCorrect + correct;
		cout << "Total points possible for exercise " << exercise << " : ";
		cin >> possible;
		totalPossible = totalPossible + possible;
		cout << "  " << endl;

		counter--;
		exercise++;
	}

	//output
	percent = (totalCorrect / (double) totalPossible) * 100;
	cout << "Your total is " << totalCorrect << " out of " << totalPossible << " , or " << percent << "%. " << endl;

return 0;
}
