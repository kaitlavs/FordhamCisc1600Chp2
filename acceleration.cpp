// Kaitlyn Lavan
// Sept. 15, 2017
// code to calculate acceleration

#include <iostream> 
using namespace std;

int main()
{

	//variables
	double velocity0, velocity1, time, accl;

	//input
	cout << "Enter the starting velocity v0 (meters/sec) : ";
	cin >> velocity0;
	cout << "  Enter the ending velocity v1 (meters/sec) : "; 
	cin >>  velocity1; 
	cout << "                           Enter the time t : ";
	cin >> time;

	//processing
	accl = (velocity1 - velocity0) / time;

	//output 
	cout << "The average acceleration is " << accl << " meters/sec^2." << endl;

return 0;
}
