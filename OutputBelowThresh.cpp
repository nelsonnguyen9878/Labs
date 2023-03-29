#include <iostream>
using namespace std;
#include <string>

const int SIZE = 6;
void getStringAra(string[]);
void compareAra(string[]);


int main() {

   /* Type your code here. */
   string words[SIZE];
   
   getStringAra(words);
   compareAra(words);

   return 0;
}

void getStringAra(string words[])
{
   for(int i = 0; i < SIZE;i++)
   {
      cin >> words[i];
   }
   return;
}

void compareAra(string words[])
{
   for(int i = 0; i < SIZE; i++)
   {
      if(words[i] < words[5])
      {
       cout << words[i] << ", ";  
      }
   }
   return;
}