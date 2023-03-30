/*
    filename: wk4_bankAccount
    summary: use switch structure to process user's choice.
    author: Nelson Nguyen
    date: 1/31/23
*/

#include <iostream>
using namespace std;

int main()
{
    //Initialize variables
    float balance;
    char action;
    float deposit;
    float withdraw;
    //Assign values
    cout << "Please enter your balance for the account: " << endl;
    cin >> balance;
    
    cout << "What would you like to do?\n";
    cout << "d - deposit\n"
         << "w - withdraw\n"
         << "s - see balance\n";
    
    cin >> action;
    
    switch(action)
    {
        case 'D':
        case 'd': cout << "How much are you depositing?: ";
            cin >> deposit;
            balance += deposit;
            break;
        case 'W':
        case 'w': cout << "How much would you like to withdraw?: ";
            cin >> withdraw;
            if(balance > withdraw && withdraw >= 0)
            {
                balance -= withdraw;
            }
            else
                cout << "You don't have enough funds to withdraw" << endl;
            
            break;
        case 'S':
        case 's': cout << "Your balance is: $" << balance << endl;
            break;
    }
    cout << "Total balance: $" << balance << endl;

    //Perform operations

    return 0;
}




