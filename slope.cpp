// Kaitlyn Lavan
// Sept. 15, 2017
// code to calculate the slope of a line

#include <iostream>
using namespace std;

int main()
{
	//variables 
	double x1, x2, y1, y2, slope;

	//input
	cout << "Enter x1:";
	cin >> x1;
	cout << "Enter y1:";
	cin >> y1;
	cout << "Enter x2:";
	cin >> x2;
	cout << "Enter y2:";
	cin >> y2;

	//processing
	slope = (y2 - y1) / (x2-x1);

	//output
	cout << "The slope for the line that connects two points (" <<x1<< "," <<y1<< ") and (" <<x2<< "," <<y2<< ") is " <<slope<< "." << endl;

return 0;
}
