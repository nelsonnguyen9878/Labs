/* wk2_sortWords.cpp
   summary: sorting by letter
   
   Author: Nelson Nguyen
   Date: 1/19/23
*/

// libraries
#include <iostream>
using namespace std;


// code
int main()
{
    // Variables
    string word1;
    string word2;
    string word3;
    
    string first;
    string second;
    string third;
    
    
    // Three inputs
    cout << "Enter the three brand cars you know, seperated by a space.\n";
    cin >> word1 >> word2 >> word3;
    cout << " " << endl;
    cout << "You entered: " << word1 << " " << word2 << " " << word3 << endl;
    
    // computing
    if (word1 < word2 && word1 < word3)
        first = word1;
    else if (word2 < word1 && word2 < word3)
        first = word2;
    else if (word3 < word1 && word3 < word2)
        first = word3;
        
    if (word1 > word2 && word1 > word3)
        third = word1;
    else if (word2 > word1 && word2 > word3)
        third = word2;
    else if (word3 > word1 && word3 > word2)
        third = word3;
        
    if (word1 > first && word1 < third)
        second = word1;
    else if (word2 > first && word2 < third)
        second = word2;
    else if (word3 > first && word3 < third)
        second = word3;
    
    // sorting
    cout << "After sorting: " << first << " " << second << " " << third << endl;
    
    return 0;
}

