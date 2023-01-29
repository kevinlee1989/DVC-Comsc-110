//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
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
//NONE

//main program
int main()
{
  //Data
  int deposit = 100; // how much money you will add to your savings account each month (integer) author selected amount (for example $10, $100, etc.)
  double interestRate = 1.0; //annual interest rate you can expect (check google.com: for example 0.04 is 4%) (decimal) author selects annual interest rate (for example 0.075 is 7.5%) (0<interestRate<=1)
  int years = 10; // how many more years until you retire (integer)
  double amountSaved; // how much money you have when you retire (decimal) (formatted to 2 digits past decimal point)
  int time = 120; // number of months in years (integer)

  // introduction
  cout << "Objective: This program will calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // calculate how much money to save every month
  interestRate = (interestRate / 12);
  amountSaved = deposit * ((pow((1 + interestRate),time) - 1) / interestRate);
  interestRate = (interestRate * 100) * 12;
  
  // output
  cout.setf(ios::fixed | ios::showpoint);
  cout << "In " << years << " years at "<< setprecision(2) << interestRate << "%, $" << deposit << " deposited per month will grow to $" << amountSaved;
}//main