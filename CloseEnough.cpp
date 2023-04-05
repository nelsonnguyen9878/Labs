#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
   double number1;
   double number2;
   double epsilon;
   double difference;
   
   /* Type your code here. */
   
   cin >> number1 >> number2 >> epsilon;
   
   difference = number1 - number2;
   difference = abs(difference);
   if(difference <= 0.001)
   {
     cout << "equal" << endl; 
     
   }
   else if(difference > 0 && difference <= epsilon)
   {
    cout << "close enough" << endl;  
   }
   else 
   {
    cout << "not close" << endl;  
   }
   

   
   
   
   return 0;
}