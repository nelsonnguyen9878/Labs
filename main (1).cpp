#include <iostream>
using namespace std;
#include <string>

// global const
const int SIZE = 3;

int main()
{
    // Variables
    int smallest;
    string temp;
    string words[SIZE];
    
    // asking user input to put into the array
    for(int i = 0; i < SIZE ; i++)
    {
        cout << "Enter two words to compare which value is better: ";
        cin >> words[i];
    }
    
    // insertion sorting algo
    for(int i = 0; i < SIZE - 1; i++)
    {
        smallest = i;
        for(int j = i; j < SIZE; j++)
        {
            if(words[j] < words[smallest])
            smallest = j;
        }
        temp = words[smallest];
        words[smallest] = words[i];
        words[i] = temp;
    }
    
    // printing out the array
    for(int i = 0; i < SIZE; i++)
    {
        cout << words[i] << " ";
    }
    
  

    return 0;
}
