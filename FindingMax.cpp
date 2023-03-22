#include <iostream>
using namespace std;

const int SIZE = 10; // global const

// prototypes
void fillAra(int[]);
void printLargestNum(int[]);

// main code
int main() {

   // declaring array
   int nums[SIZE];

   // calling array
   fillAra(nums);
   printLargestNum(nums);
   
   return 0;
}

// defining functions
void fillAra(int nums[])
{
 for(int i = 0; i < SIZE; i++)
 {
    cin >> nums[i];
 }
 return;
}

void printLargestNum(int nums[])
{
 int maxItem;
 maxItem = nums[0];

 for(int i = 0; i < SIZE; i++)
 {
   if(nums[i] > maxItem)
   {
   maxItem = nums[i];
   }
 }
 cout << maxItem;
 return;
}