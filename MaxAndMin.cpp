#include <iostream>
using namespace std;

/* Prototypes */ 
int MaxNumber(int, int, int, int);
int MinNumber(int, int, int, int);


int main() {
   /* Type your code here. Your code must call the functions.  */
   int num1,
       num2,
       num3,
       num4;
   int max,
       min;
   
   cin >> num1 >> num2 >> num3 >> num4;
   max = MaxNumber(num1, num2, num3, num4);
   min = MinNumber(num1, num2, num3, num4);
   
   cout << "Maximum is " << max << endl;
   cout << "Minimum is " << min << endl;
   
   return 0;
}


// defining functions

int MaxNumber(int num1, int num2, int num3, int num4)
{
   int largest;
   if(num1 >= num2)
   {
      largest = num1;
      if(num1 < num3)
      {
         largest = num3;
      }
        
      if(num1 < num4)
      {
         largest = num4;  
      }
      
   }
   else if(num2 >= num1)
   {
      largest = num2;  
      if(largest < num3)
      {
       largest = num3;  
      }
      if(largest < num4)
      {
       largest = num4;  
      }
   }
   return largest;
}

int MinNumber(int num1, int num2, int num3, int num4)
{
   int smallest;
   if(num1 <= num2)
   {
      smallest = num1;
      if(smallest > num3)
      {
        smallest = num3;
      }
      if(smallest > num4)
      {
        smallest = num4;  
      }
   }
   else if(num2 <= num1)
   {
    smallest = num2;  
    if(smallest > num3)
    {
      smallest = num3;  
    }
    if(smallest > num4)
    {
      smallest = num4;  
    }
   }
   return smallest;
}

