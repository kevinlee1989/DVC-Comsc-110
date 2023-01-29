//Objective:  play a game where the user guesses a number from 1 to 100 
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <deque>
#include <iostream>
using namespace std;
#include <cstdlib> //random number generator
#include <ctime>  //random number generator

//Programmer defined data types
struct Number
{
  int guess;
};//Number

//Special compiler dependent definitions
//NONE

//global constants/variables
const int MAX_GUESS = 100; //list capacity

//Programmer defined functions
void checkNewGuess(deque<Number>& number, int n);

//main program
int main()
{
  //Data
  // container for the values in the list
  int nGuess =0; // the number of guesses
  deque<Number> number;	

  // introduction
  cout << "Objective: This program will play a game where the user guesses a number from 1 to 100.\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl;
  cout << "instructions/rules: I'm thinking of a number from 1 to 100. What is it? " << endl << endl;


  //game loop: prompt the userGuess, input userGuess, provide feedback  
  checkNewGuess(number, nGuess);

  //end of game
  cout << "Thanks for playing overUnder game with me!" << endl;
}//main

void checkNewGuess(deque<Number>& number, int n)
{
  //data
  //s is container for the values on the list
  //n is the number of values on the list
  //g is the new guess number
  int i; //loop index
  int userGuess; // each user guess of target number
  srand(time(0)); rand(); //"seed" the random number generator
  int target = 1 + rand() % 100; // the number to be guessed
  Number anumber;

  //check if new guess number is a duplicate number
    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
  while (true)
 {
    cin >> userGuess;
    cin.ignore(1000,10);
    int count = 0;
  for (i=0; i<number.size(); i++)
  {
   if(userGuess == number[i].guess)
   {
    cout << "You already guessed " << userGuess << " -- guess again: ";
    count = 1;
   }//if
  }//for loop
  if ( count == 0 && n < MAX_GUESS)
  {
    if (userGuess >= 1 && userGuess <=100)
    {
      if (userGuess == target)
      {
        cout << "That's right -- it's "<< target << endl;
        break;
      }//correct guess
      else if (userGuess > target)
      { cout << "That's too high -- guess again :" ; }
      else
      { cout <<  "That's too low -- guess again :"; }//userGuess is less then target
    }//valid input
    else 
    {
      cout << "I really want a number from 1 to 100 -- guess again :";
    }//invalid input
  }//traverse list to check for duplicates
   anumber.guess = userGuess;
   number.push_back(anumber);
 }//while true game loop
}//void checkNewGuess