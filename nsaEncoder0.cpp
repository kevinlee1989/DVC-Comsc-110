//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <fstream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
string getFileName();



//main program
int main()
{
  //Data
  string objective = "The program will be a template for C++ programs and to test code.\n"; //program objective
  string instructions = "Just watch...\n\n"; //user instructions 
  int i;
  string s;
  string fileName;
  ifstream fin;
  int count = 0;

  //user introduction
  introduction(objective, instructions);

  //read input file
  fileName = getFileName();
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";
  getline(fin,s);

  
  //encode the sentence
  for (i = 0; i < s.length(); i=i+1)
  {
   s[i] = s[i] + 1; // bump the ASCII code by 1
   count = count + 1;
  }//for i
  
  //output result
  if (count == 0)
  {
   cout << " File was empty . " <<endl;
  }
  cout << s;
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


//get user specified filename
string getFileName()
{
  //data
  string fN;

  //input filename
  do
  {
    cout << "Please enter an input filename [i.e. : x.txt] : ";
    getline(cin,fN);
  }while(!(fN.length() >=5)); // do-while
    return fN;
}//getFileName