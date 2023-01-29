//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction



//main program
int main()
{
  //Data
  string objective = "The program will be a template for C++ programs and to test code.\n"; //program objective
  string instructions = "Decode the entered text so that each character is converted to the next character in the ASCII code. That is, convert 'B' to 'A', '5' to '4', '+' to '*', etc. So the word Ifmmp will appear as Hello in decoded form. Remember a line of text contains multiple characters, and each character has an ASCII value, and by subtracting 1 to that ASCII value results in the next character in the ASCII table.\n\n"; //user instructions 
  int i;
  ifstream fin;
  int count = 0;
  string first;
  string second;
  string third;
  string forth;
  int r;
  string secret = "secret.txt";

  //user introduction
  introduction(objective, instructions);

  //read input file
  fin.open(secret.c_str());
  if (!fin.good()) throw "I/O error";
  cout << "Enter a line of text:";
  cin >> r;
  cin.ignore(1000,10);
  getline(fin,first);
  getline(fin,second);
  getline(fin,third);
  getline(fin,forth);
  //encode the sentence

  for (i = 0; i < first.length(); i=i+1)
  {

   first[i] = first[i] - 1; // bump the ASCII code by 1
   count = count + 1;
  }//for i
  if ( r == 1)
 {
  cout << first;
 }//if
  for (i = 0; i < second.length(); i=i+1)
  {
   second[i] = second[i] - 1; // bump the ASCII code by 1
   count = count + 1;
  }//for i
  if ( r == 2)
 {
  cout << second;
 }//if
  for (i = 0; i < third.length(); i=i+1)
  {
   third[i] = third[i] - 1; // bump the ASCII code by 1
   count = count + 1;
  }//for i
  if ( r == 3)
 {
  cout << third;
 }
  for (i = 0; i < forth.length(); i=i+1)
  {
   forth[i] = forth[i] - 1; // bump the ASCII code by 1
   count = count + 1;
  }//for i
  if ( r == 4)
 {
  cout << forth;
 }//if
  if ( r > 4 )
  {
   cout << " there are no line " << endl;
   count = count + 1;
  }
  
  //output result
  if (count == 0)
  {
   cout << " File was empty . " <<endl;
  }
  fin.close();
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