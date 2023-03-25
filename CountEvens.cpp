#include <iostream>
using namespace std;

/* Type your code here. */
// prototypes
int CountEvens(int, int , int, int);

// main
int main() {
   int result;

   
   
   
   result = CountEvens(3, 1, 4, 12);
	cout << "Total evens: " << result << endl; // Expected "Total evens: 2".

   return 0;
}

// defining functions

int CountEvens(int num1, int num2, int num3, int num4)
{
   int Evens;
   Evens = 0;
   if(num1 % 2 == 0)
   {
      Evens ++;
   }
   if(num2 % 2 == 0)
   {
      Evens ++;
   }
   if(num3 % 2 == 0)
   {
      Evens ++;
   }
   if(num4 % 2 == 0)
   {
      Evens ++;
   }
   return Evens;
}