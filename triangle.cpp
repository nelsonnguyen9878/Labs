/*
    filename: wk3_Triangle
    summary: Tells us what triangle it is through the sides
    author: Nelson Nguyen
    date: 1/26/23
*/

#include <iostream>
using namespace std;

int main()
{
    //Initialize variables
    int angle1;
    int angle2;
    int angle3;
    int totalAngle;
    
    
    //Assign values
    
    cout << "Enter the degrees of the 3 angles of a triangle: " << endl;
    cin >> angle1;
    cin >> angle2;
    cin >> angle3;
    
    totalAngle = angle1 + angle2 + angle3;
    
    //Perform operations
    if (totalAngle == 180 && angle1 > 0 && angle2 > 0 && angle3 >0)
    {
        if (angle1 == 60 && angle2 == 60 && angle3 == 60)
            cout << "That is an equilateral triangle.\n";
        {
            if (angle1 > 90 || angle2 > 90 || angle3 > 90 && totalAngle == 180)
                cout << "That is an obtuse triangle.\n";
            {
                if (angle1 == 90 || angle2 == 90 || angle3 == 90 && totalAngle == 180)
                   cout <<"This is a right triangle.\n";
                {    
                    if (angle1 < 90 && angle2 < 90 && angle3 < 90 && totalAngle == 180)
                        cout << "This is a acute triangle.\n";
                }
            }    
        }
    }   
    else 
        cout << "This is not a triangle.";



    return 0;
}

