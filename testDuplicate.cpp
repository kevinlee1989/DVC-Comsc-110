//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
const int MAX_SCORES = 10; //list capacity

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
void outputList(int* s, int n); //output the entire list of nonduplicate scores
void checkNewScore(int*s, int n, int AS); //check each score if it is a duplicate

//main program
int main()
{
  //Data
  string objective = "The program will be a template for C++ programs and to test code.\n"; //program objective
  string instructions = "Just watch...\n\n"; //user instructions 
  int nScores = 0; // number of values on the list
  int score[MAX_SCORES]; //container for the values in the list
  int i; //loop index
  int aScore=90; //each new score to check and only add to the list if not duplicate
  bool duplicate = false; //true if aScore is already on the list, otherwise false

  //user introduction
  introduction(objective, instructions);

  //check if new score is a duplicate score
  checkNewScore(score, nScores, aScore);
  aScore = 80;
  checkNewScore(score, nScores, aScore);
}//main

//user introduction
void introduction(string obj, string ins)
{
  //data
  //obj is the program objective
  //ins is the user instructions

  //user introduction
  cout << "Objective: " << obj; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << "Instructions: " << ins;
}//introduction

//output the entire list of nonduplicate scores
void outputList(int* s, int n)
{
  //data
  //s is the container for the values in the list
  //n is the number of values on the list 
  int i; //loop index

  //traverse the list and output the values
  cout << "List of scores: ";
  for(i=0; i < n; i=i+1)
  {
   cout << s[i] << " ";
  }//for i traverse list
  cout << endl;
}//void outputList

//check each score if it is a duplicate 
void checkNewScore(int* s, int n, int AS)
{
  //data
  //new is the new score 
  //s is container for the values on the list
  int i; //loop index
  // n is number of values on the list
  bool duplicate = false; //true if aScore is already on the list, otherwise false

  //check if new score is a duplicate score
  if (n>0)
  { 

   outputList(s, n);
  }//outputList
  else
  {
   cout << "List is empty";
  }
  for (i=0; i < n; i =i + 1)
  {
   if (AS == s[i])
   {
    cout << AS << " is a duplicate score! " <<endl;
    duplicate = true;
   }
  }//for i traverse list to check for duplicate
  if (!duplicate && n < MAX_SCORES)
  {
   s[n++] = new;
   cout << new;
   outputList(s, n);
  }
  update = n;
  return = update;

}//checkNewScore