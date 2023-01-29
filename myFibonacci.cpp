//Objective:  calculate a value in the "Fibonacci number" series.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <deque> //collection
#include <iostream>
using namespace std;


//Programmer defined data types
struct Number
{
  int num; //each numbers
}; //Number

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
int fibo(int n);

//main program
int main()
{
  //Data
  string objective = "The program will calculate a value in the Fibonacci number series.\n"; //program objective
  string instructions = "Enter an index for how many Fibonacci number to ouptput and it has to be greater than 0.\n\n"; //user instructions  
  deque<Number> number;
  int userIndex;
  int i;
  int result;


  //user introduction
  introduction(objective, instructions);

  //prompt the user
  cout << "Enter an index [0 or greater]: ";
  cin >> userIndex;
  cin.ignore(1000,10);
  for(i=0; i<2; i++)
  {
   number[i].num = i;
  }
  for(i=2;i<=userIndex;i++)
  {
   number[i].num = number[i-2].num + number[i-1].num;
  }
  for(i=0;i<=userIndex;i++)
  cout << number[i].num << " ";
  result = fibo(userIndex);

  cout << endl << "The Fibonacci number at index " << userIndex <<" is " << result << "."<< endl;
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

int fibo(int n)
{
  //user is the user selected number
  //number is a collection of number records of datatype Number
 
   if (n < 2) 
   {
    return n;
   }
   else
   { 
    return fibo(n-1) + fibo(n-2);
   }
}//fibonacci