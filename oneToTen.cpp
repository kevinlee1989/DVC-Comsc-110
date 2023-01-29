//Objective: play a game where user will guess a number from 1 to 10
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> //Console input output
using namespace std;
#include <cstdlib> //random number generator
#include <ctime>  //random number generator
//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  srand(time(0)); rand(); // "seed" the random number generator
  int userGuess; // each user guess of target number
  int target = 1 + rand() % 10; // the number to be guessed

  // introduction
  cout << "Objective: This program will play a game where user will guess a number from 1 to 10.\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << "Instructions/rules: I am thinking of a number from 1 to 10. What is it? " << endl << endl;

  // game loop: prompt the userGuess, input userGuess, provide feedback 
  while (true)
  {
    cout << "What is your guess [1-10 or 0 to Exit]? ";
    cin >> userGuess;
    cin.ignore(1000,10);
    if (userGuess ==0)
    {
      break;
    }//user chooses to exit program
    else if (userGuess >=1 && userGuess <= 10 )
    {
      if (userGuess == target)
      {
        cout << "You guessed it!" << endl;
        break;
      }//correct guess
      else
      {
        cout << "Try again..." << endl;
      }//incorrect guess
    }//valid input
    else
    {
      cout << "I really want a number from 1 to 10." <<endl;
    }//invalid input
  }// while true game loop
  
  // end of game
  cout << "Thanks for playing oneToTen game with me!" << endl;
}//main