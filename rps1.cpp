//Objective:  to play rock, paper, scissors game.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction()
{
  // output my name and objective and program information
  cout << "Objective: This program will play rock, paper, scissors game..\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 19892 \n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ <<  endl; 
  cout << "introduction : Welcome to the game of Rock, Paper, Scissors. You will be asked to choose either R=rock or P=paper or S=scissors, and the computer will do the same. The winner is determined by Rock wins against Scissors, or Scissors wins against Paper, or Paper wins against Rock. The game winner is the player with the most scores. The best player is the player with the highest overall score. " << endl << endl;

}//introduction

 //computerPlay
char computerPlay(string q, int computerNumber)
  {
    //data
    char computerChoice;
    

   if (computerNumber == 0)
   {
    computerChoice = 'R';
    cout << q << computerChoice;
   }
   if (computerNumber == 1)
   {
    computerChoice = 'P';
    cout << q << computerChoice;

   }
   if (computerNumber ==2)
   {
    computerChoice = 'S';
    cout << q << computerChoice;

   }
    return computerChoice;
  } //computerPlay


  //userPlay
char userPlay()
{
   //data
   char userAnswer;


   //output prompt and input user answer

  while (true)
 {
   cout << "Choose: [R=rock, P=paper, S=scissors, or Q=quit]: ";
   cin >> userAnswer;
   cin.ignore(1000,10);
   userAnswer = toupper(userAnswer);	
   if (userAnswer == 'R') break;
   if ( userAnswer == 'P') break;
   if ( userAnswer == 'S') break;
   if (userAnswer == 'Q') break;
   cout << userAnswer << " is invalid input , Try again,,," << endl;
 }// while
 return userAnswer;
} //userPlay
 
  //determines winner and keep score
  string determine(char computerCompare,char userChoice)
{
  //data
  string whoWin = "";
  
  //compete
  switch(computerCompare)
 {
  case 'R':
     if(userChoice == 'R')
     {
      whoWin = " tie";
      cout << whoWin << endl;
     }//If R
     else if(userChoice == 'P')
     {
      whoWin = " you win!";
      cout << whoWin << endl;
     }//if else P
     else
     {
      whoWin = " Computer wins";
      cout << whoWin << endl;
     } break;
  case 'P':
     if(userChoice == 'R')
     {
      whoWin = " Computer wins";
      cout << whoWin << endl;
     }//If R
     else if(userChoice == 'P')
     {
      whoWin = " tie";
      cout << whoWin << endl;
     }//if else P
     else
     {
      whoWin = " you win!";
      cout << whoWin << endl;
     } break;
  case 'S':
     if(userChoice == 'R')
     {
      whoWin = " you win!";
      cout << whoWin << endl;
     }//If R
     else if(userChoice == 'P')
     {
      whoWin = " Computer wins";
      cout << whoWin << endl;
     }//if else P
     else
     {
      whoWin = " tie";
      cout << whoWin << endl;
     } break;
 }//switch
  return whoWin;
}//determine

//main program
int main()
{
  //Data 
  char userChoice;	
  int computerWin=0;
  int userWin=0;
  int computerCompare;
  string define;

  //user introduction
 introduction();
  //play Rock Paper Scissors game
while (true)
 {
  userChoice = userPlay();
  if (userChoice == 'Q') break;
  //computerPlay
  computerCompare =computerPlay(" Computer : ", rand() % 3);
  //userPlay
  cout << " Player : " << userChoice;
  //determine winner and keep score
  define = determine(computerCompare,userChoice);
  if (define == " Computer wins") computerWin = computerWin +1;
  if (define == " you win!") userWin = userWin +1;
  //output result
  cout << " Computer wins : " << computerWin << " Human wins: " << userWin << endl;
 }//while loop 
  cout << "Thanks for playing!";
}//main
   







