//Objective: read scores [0-100] from input file and calculate average, high, low, and whether there are any prefect scores.
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
  string objective = "The program will read scores [0-100] from input file \nand calculate average, high, low, \nand whether there are any prefect scores.\n"; //program objective
  string instructions = "You will provide an input filename for the data.\n\n"; //user instructions 
  ifstream fin; //represent input file
  int aScore; //each score on each line of the input file
  int sum = 0; //sum of all scores in the input file
  int count =0; //number of scores in the input file 
  int max=-1; //maximum score
  int min=101; //minimum score
  bool perfect = false; //flag: True = there are 1 or more perfect scores [100], False = no perfect scores
  double average = 0.0; //average score of all scores in the input file
  string fileName; //user specified filename

  //user introduction
  introduction(objective, instructions);

  //read input file: sum, count, update maximum and minimum scores for each score then calculate the average score
  fileName = getFileName();
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";
  while (fin.good())
  {
    fin >> aScore;
    fin.ignore(1000,10);
    if (fin.good())
    {
    cout << aScore << " " << endl; //for debuging
    sum = sum + aScore;
    count = count + 1;
    if (max < aScore) max = aScore;
    if (min > aScore) min = aScore;
    if (aScore == 100) perfect = true;
    }
  }//while no EOF
  if (count >0)
  {
  average = (double)sum / count; // 2problems 1. truncation, 2. when files is empty this line should now execute
  }
  //output results : average, maximum, minimum and whether there were any perfect scores
  if (count > 0)
  {
    cout << "The average score : " << average << endl;
    cout << "The maximum score : " << max << endl;
    cout << "The minimum score : " << min << endl;
    if (perfect)
    {
     cout << "There were 1 or more perfect [100] scores. " << endl;
    }
     else
    {
     cout << "There were no perfect[100] scores. " << endl;
    }//if perfect
  }
  else
  {
     cout << fileName << "was empty. " << endl;
  }//if empty file
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
