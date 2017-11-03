// Kaitlyn Lavan
// Sept. 19, 2017
// code to practice writing if-then

#include <iostream>
using namespace std;

int main()
{
	//variables 
	int number;

	// input
	cout << "Enter the integer : ";
	cin >> number;

	// processing and output
	if (number % 5 == 0) 
	{ 
	    cout << "HiFIve" << endl;
	    cout << "HiEven" << endl;
	}
	if (number % 2 == 0)
	{	 
	    cout << "HiEven" << endl;
	    cout << "HiFIve" << endl;
	}

	return 0;
}
