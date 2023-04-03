#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int wages; 
   int taxint;
   int unempcomp;
   int status;
   int taxesHeld;
   int AGI;
   int deduction1 = 12000;
   int deduction2 = 24000;
   int taxincome;
   double federaltax;
   int taxRefund;
   
   /* Type your code here. */
   cin >> wages >> taxint >> unempcomp >> status >> taxesHeld;
   AGI = wages + taxint + unempcomp;
 
  // AGI less than 120000
   if (AGI < 120000)
   {
      // Status 1
      cout << "AGI: $" << AGI << endl;
      if (status == 1 || status != 2)
      {
       cout << "Deduction: $" << deduction1 << endl; // Prints $12000
       taxincome = AGI - deduction1;
       if (taxincome < 0) // if negative, taxincome is set to 0
       {
         taxincome = 0;  
         cout << "Taxable income: $" << taxincome << endl;
       }
       else if (taxincome > 0)
       {
          cout << "Taxable income: $" << taxincome << endl;
          if (taxincome >= 0 && taxincome <= 10000)
          {
            federaltax = taxincome * 0.10;
            cout << "Federal tax: $" << round(federaltax) << endl;
          }
          else if (taxincome >= 10001 &&  taxincome <= 40000)
          {
            federaltax = ((taxincome - 10000) * 0.12) + 1000;
            cout << "Federal tax: $" << round(federaltax) << endl;
          } 
          else if (taxincome >= 400001 && taxincome <= 85000)
          {
            federaltax = ((taxincome - 40000) * 0.22) + 4600; 
            cout << "Federal tax: $" << round(federaltax) << endl;
          }
          else if (taxincome > 85000)
          {
            federaltax = ((taxincome - 85000) * 0.24) + 14500;
            cout << "Federal tax: $" << round(federaltax) << endl;
          }
         taxRefund = federaltax - taxesHeld; 
         if (taxRefund < 0)
         cout << "Tax refund: $"<< abs(taxRefund) << endl;
         if(taxRefund > 0)
         cout << "Taxes Owed: $" << (taxRefund) << endl;
       }
       
      
       
      }
      
      // Status 2
      if (status == 2)
      {
       cout << "Deduction: $" << deduction2 << endl;
       taxincome = AGI - deduction2;
       if(taxincome < 0)
       { 
         taxincome = 0;
         cout << "Taxable income: $" << taxincome << endl;
       }
       else if (taxincome > 0)
       {
         cout << "Taxable income: $" << taxincome << endl;
       }
       if (taxincome >= 0 && taxincome <= 20000)
       {
         federaltax = taxincome * 0.10;
         cout << "Federal tax: $" << round(federaltax) << endl;
       }
       else if (taxincome >= 20001 && taxincome <= 80000)
       {
         federaltax = ((taxincome - 20000) * 0.12) + 2000;
         cout << "Federal tax: $" << round(federaltax) << endl;
       }
       else if (taxincome > 80000)
       {
         federaltax = ((taxincome - 80000) * 0.22) + 9200;
         cout << "Federal tax: $" << round(federaltax) << endl;
       }
       taxRefund = federaltax - taxesHeld;
       cout << "Tax refund: $" << abs(taxRefund) << endl;
      }
      else if(status != 1 || status !=2)
      {
       status = 1;
      }   
      
   }
   else
   {
      cout << "AGI: $" << AGI << endl;
      cout << "Error: Income too high to use this form" << endl;
   }
   
   
   

   return 0;
}
