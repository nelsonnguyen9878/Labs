// Filename: helloWorld.cpp
// Summary: Simple output to the monitor
/*
    Author: Nelson Nguyen
    Date 1/10/23
*/

//preprocessor directives (libraries)
#include <iostream>
using namespace std;

// code for the program
int main()
{
    cout << "Hello, world!" << endl << endl;
    cout << "Thank goodness I don't live in California right now" << endl;
    cout << endl;
    
    // escape sequeneces 
    cout << "Roses are red\nViolets are blue.\n"; // newline
    cout << "C++\b is fun!\n"; // backspace
    cout << "one\ttwo\tthree\n";
    cout << "twenty-three\tfive\n";
    
    // multiple-lines couts
    cout << "It was the best of times. It was the worst of times."
         << " Today is Tuesday.\n";
    
    
    return 0;
}
