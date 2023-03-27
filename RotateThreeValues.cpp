#include <iostream>
using namespace std;

// Prototype goes here
void RotateRight3(int&, int&, int&);


int main() {
   int n1, n2, n3;
   
   cin >> n1; 
   cin >> n2;
   cin >> n3;
   
   RotateRight3(n1, n2, n3);
   
   cout << n1 << " " << n2 << " " << n3 << endl;
   
   return 0;
}

// Function definition goes here
void RotateRight3(int& n1, int& n2, int& n3)
{
   int num1,
       num2,
       num3;
   num1 = n1;
   num2 = n2;
   num3 = n3;
   
   n1 = num3;
   n2 = num1;
   n3 = num2;
   return;
}
