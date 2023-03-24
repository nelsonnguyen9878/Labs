#include <iostream>
using namespace std;

// main
int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;

   int seed;
   cin >> seed;
   srand(seed);
   
   /* Type your code here. */
   // variables
   int rounds;
   string name1;
   string name2;
   int userNum;
   string result;
   int counter;
   
   counter = 0;
   rounds = 0;
   userNum = 0;
   
   // input 2 names and rounds, rounds has to be positive and greater than or equal to 1
   cin >> name1 >> name2;
   while(rounds <= 0)
   {
      cin >> userNum;
      if(userNum >= 1)
         {
            rounds = rounds + userNum;
         }
      if (userNum < 1)
         cout << "Rounds must be > 0" << endl;
   }
   // output competitors and rounds
   cout << name1 << " vs " << name2 << " for " << rounds << " rounds" << endl;
   
   
   // Rock Paper Scissors
   
   int player1;
   int player2;
   int wins1;
   int wins2;
   wins1 = 0;
   wins2 = 0;
   while(counter < rounds)
   {
      //Generating Values 
      player1 = rand()%3;
      player2 = rand()%3;

      while(player1 == player2)
      {
         cout << "Tie" << endl;
         player1 = rand()%3;
         player2 = rand()%3;
      }
      switch(player1)
      {
       // player 1 is rock
       case ROCK: 
       if(player2 == SCISSORS)
       {
       cout << name1 << " wins with rock" << endl;
       wins1 ++;
       }
       else
       {
       cout << name2 << " wins with paper" << endl;
       wins2 ++;
       }
       break;
       // player 1 is paper
       case PAPER:
       if(player2 == ROCK)
       {
        cout << name1 << " wins with paper" << endl;
        wins1 = wins1 + 1;
       }
       else
       {
        cout << name2 << " wins with scissors" << endl;
        wins2 ++;
       }
       break;
       // player 1 is scissor
       case SCISSORS:
       if(player2 == PAPER)
       {
        cout << name1 << " wins with scissors" << endl;
        wins1 = wins1 + 1;
       }
       else 
       {
         cout << name2 << " wins with rock" << endl;
         wins2 = wins2 + 1;   
       } 
       break;
      }
   // counter
   counter ++; 
   }
   // print winning message
   cout << name1 << " wins " << wins1 << " and " << name2 << " wins " << wins2 << endl;
   
   
   
   
   return 0;

}
