// passByReference.cpp
// Program to use pass by reference to get 2 values from the user,
// compute the product & the sum; output all values.

#include <iostream>
using namespace std;

void get2Values(int&, int&); // pass by reference
int computeProduct(int, int); // pass by value; return value
void computeSum(int, int, int&); // pass by value; one pass by ref. for sum
void displayAll(int, int, int, int); // pass by value

int main()
{
    int x,
        y;
    int sum,
        product;

    get2Values(x, y);
    product = computeProduct(x, y);
    computeSum(x, y, sum);
    displayAll(x, y, product, sum);
    return 0;
}

void get2Values(int& ex, int& wy)
{
    cout << "What is the first number? ";
    cin >> ex;
    cout << "What is the second number? ";
    cin >> wy;
    return;
}

int computeProduct(int ex, int wy)
{
    return ex * wy;    
}

void computeSum(int ex, int wy, int& total)
{
    total = ex + wy;
    return;
}

void displayAll(int ex, int wy, int prod, int total)
{
    cout << ex << " * " << wy << " = " << prod << endl
         << ex << " + " << wy << " = " << total << endl;
}


