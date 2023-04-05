/*
    filename: wk5_doWhileFraction.cpp
    summary: converts fraction to decimal values.
    author: Nelson Nguyen
    date: 2/9/23
*/

#include <iostream>
using namespace std;

int main()
{
    //Initialize variables
    int numerator;
    int denominator;
    float decimal;
    char again;
    //Assign values
    do
    {
        cout << "Enter the numerator: " << endl;
        cin >> numerator;
        
        do
        {
            cout << "Enter the denominator: " << endl;
            cin >> denominator;
            if (denominator == 0)
                cout << "Cannot divide by zero" << endl;
        } while (denominator == 0);
        decimal = 0;
        decimal = (numerator + decimal) / denominator;
        cout << numerator << " / " << denominator << " = " << decimal << endl;
        
        
        cout << "Do you want to try another fraction? (y or n):  ";
        cin >> again;
    } while (again == 'y');
    

    //Perform operations

    return 0;
}


