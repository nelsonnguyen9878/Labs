// array2D.cpp
// Demo of declaring, filling, processing
// and printing values in  a 2-D array

#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 3;

void fillAra(int[][COLS]);
void doubleIt(int[][COLS]);
void printAra(int[][COLS]);


int main()
{
    int nums[ROWS][COLS];
    fillAra(nums);
    cout << "Array contents...\n";
    printAra(nums);
    doubleIt(nums);
    cout << "Doubled contents...\n";
    printAra(nums);
    
    
    return 0;
}

void fillAra(int nums[][COLS])
{
    cout << "Enter " << ROWS * COLS << " integers...\n";
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cin >> nums[i][j];
        }
    }
    return;    
}

void printAra(int nums[][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}

void doubleIt(int nums[][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            nums[i][j] *= 2;
        }
    }
    return;
}





