// Kaitlyn Lavan
// Sept. 19, 2017
// Code to determine room capacity 

#include <iostream> 
using namespace std;

int main()
{

	//variables 
	int maximumCapacity, currentCapacity, morePeople, lessPeople; 

	//input
	cout << "Enter the maximum room capacity due to fire regulations : ";
	cin >> maximumCapacity;
 	cout << " Enter the current number of people present in the room : ";
	cin >> currentCapacity;

	// output and processing 
	if (currentCapacity <= maximumCapacity)
	{  
	    cout << "It is legal to hold this party." << endl;
	    morePeople = (maximumCapacity - currentCapacity);
	    cout << "The amount of additional guests that can attend this party is : " << morePeople << endl;
	}
	
	else 
	{
            cout << "It is illegal to hold this party due to fire regulations." << endl;
	    lessPeople = -(maximumCapacity - currentCapacity);
	    cout << "The amount of guests that must be excluded is : " << lessPeople << endl;
	}

return 0;
}
