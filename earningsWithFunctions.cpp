/*
    filename: wk6_earningsWithFunctions
    summary: compute earnings for an employee.
    author: Nelson Nguyen
    date: 2/14/23 
*/

#include <iostream>
using namespace std;
#include <iomanip>

// functions
float getFloat();
string getName();


 // main code
int main()
{
    cout << fixed << setprecision(2);
    // Variables
    float hours,
          rate;
    string printName;
    float earnings;
    
    // calling functions
    printName = getName();
    cout << "Enter the rate of pay: ";
    rate = getFloat();
    cout << "Enter the hours worked:  ";
    hours = getFloat();
    
    // math
    earnings = hours * rate;
    
    // output
    cout << printName << "'s total earnings:  $" << earnings;
    
    
    
    return 0;
}

// function definitions
float getFloat()
{
    float Number;
    cin >> Number;
    return Number;
}
string getName()
{
    string Name;
    cin.ignore(80,'\n');
    cout << "What is your name?  ";
    getline(cin, Name);
    
    return Name;
}



