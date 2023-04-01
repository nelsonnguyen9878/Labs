#include <iostream>
using namespace std;

int main() {
   int num1;
   int num2;
   const int SIZE = 8;
   int nums[SIZE];
   bool answer;
   answer = false;
   
   /* Type your code here. */
   for(int i = 0; i < SIZE; i++)
   {
    cin >> nums[i];  
   }
   cin >> num1 >> num2;
   
   for(int i = num1 - 1; i < num2 - 1; i++)
   {
    if(nums[i] < nums[i + 1])  
      {
       answer = true;
      }
   }
   
   if(answer == true)
   {
    cout << "yes" << endl;  
   }
   else
   {
    cout << "no" << endl;  
   }
   
   return 0;
}
