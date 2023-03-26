#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

/* Define your function here */ 
double DrivingCost(double, double, double);

int main() {
   cout << fixed << setprecision(2);
   /* Type your code here */
   // Variables
   double milesPerGallon,
          dollarsPerGallon,
          milesDriven;
   double dollarcost;
   

   // user input
   cin >> milesPerGallon >> dollarsPerGallon;
   
   // calling functions and printing output
   
   // calling 10 milesDriven
   milesDriven = 10;
   dollarcost = DrivingCost(milesPerGallon, dollarsPerGallon, milesDriven);
   cout << dollarcost << " ";
   
   // calling 50 miles driven
   milesDriven = 50;
   dollarcost = DrivingCost(milesPerGallon, dollarsPerGallon, milesDriven);
   cout << dollarcost << " ";
   
   // calling 400 miles driven
   milesDriven = 400;
   dollarcost = DrivingCost(milesPerGallon, dollarsPerGallon, milesDriven);
   cout << dollarcost << endl;
   
   return 0;
}
// defining function
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven)
{
   double cost;
   cost = (milesDriven / milesPerGallon) * dollarsPerGallon;
   return cost;
}