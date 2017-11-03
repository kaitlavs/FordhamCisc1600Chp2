// Kaitlyn Lavan 
// Sept. 12, 2017
// code to calculate area given length and width 

#include <iostream>
using namespace std;

int main()
{
   // variables 
   int length, width, area;

   // input
   cout << "Enter the length : ";
   cin  >> length;
   cout << " Enter the width : ";
   cin  >> width;

   // processing 
   area = length * width; 

   // output
   cout << "The area is " << area << " sq ft." << endl;

   return 0;
}
