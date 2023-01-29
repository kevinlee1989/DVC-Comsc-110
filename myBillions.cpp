//Objective:  to calculate and output the number of weeks that it will take to reach a total of one thousand, million, billion dollars or greater.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;
#include <cmath>

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
void amountweek(string goal);

//main program
int main()
{
  //Data
  string objective = "The program will to calculate and output the number of weeks that it will take to reach a total of one thousand, million, billion dollars or greater.\n"; //program objective
  string instructions = "So at the end of 1 week, you collect 5 cents, and put it into your piggy bank.At 2 weeks, you collect 10 cents allowance, for a total of 15 cents in the piggy bank. At 3 weeks, you collect 20 cents allowance, for a total of 35 cents in the piggy bank. And so on..\n\n"; //user instructions 


  //user introduction
  introduction(objective, instructions);

 amountweek("thousandaire");
 amountweek("millionaire");
 amountweek("billionaire");
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


//calculate amount week to be what I want to be
void amountweek( string goal)
{
  int week;
  double amountSaved;
  int i;
  double totalSaved;
  int g;
  if(goal == "thousandaire" ) g = 1000;
  if(goal == "millionaire" ) g = 1000000;
  if(goal == "billionaire" ) g = 1000000000;
  while (true)
  {
   cout << "How many weeks do you need to be " << goal << "? :";
   cin >> week;
   totalSaved=0;
   if ( week <= 0 )
   {
    cout << "Invalid Input, I can not calculate" << endl;
   }
   for(i=1;i<=week;i++)
   {
   amountSaved = 0.5 * (pow(2,(i-1)));
   totalSaved = totalSaved + amountSaved;
   }//forloop
  if ( totalSaved < g && week > 0)
   {
    cout << " no we need more time" << endl;
   }//if
  else if( totalSaved >= g)
   {
    cout << "In " << week << " weeks, I will be a " << goal << endl;
    break;
   }//else
  }//whileloop
}//amountweek