//Objective:  Too see if there is an round off error
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
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  double number;

  // introduction
  cout << "Objective: This program will  Too see if there is an round off error.\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << "Instructions : you should press ctrl + c to stop this program! " << endl << endl;

  //check the Round-off Error
  for ( number =0; number != 3; number += 0.3)
  cout << number << endl;
}//main