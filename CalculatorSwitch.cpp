/*
    filename: Calculator
    summary: menu option for circle square or rectangle
    author: Nelson Nguyen
    date: 2/3/23
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    //Initialize variables
   char action;
   int radius;
   int length;
   int width;
   float area;
   float pi;
    //Assign values
   pi = 3.14159265358979323846;
   ;
   cin >> action;
    //Perform operations
   switch(action)
   {
      // circle
      case 'C':
      case 'c':
         cin >> radius;
         area = pi * pow(radius,2);
         break;
      // square
      case 'S':
      case 's': 
         cin >> length;
         area = length * length;
         break;
      //rectangle
      case 'R':
      case 'r':
         cin >> length >> width;
         area = length * width;
         break;
      //default
      default: cout << "Invalid character for shape." << endl;
         
   }
   if (action == 'c' || action == 's' || action == 'r')
      cout << area << endl;
    return 0;
}