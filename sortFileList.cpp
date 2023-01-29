//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
using namespace std;


//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
const int SIZE = 100;

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
void outputArray(int* a, int i);

//main program
int main()
{
  //Data
  string objective = "The program will be a template for C++ programs and to test code.\n"; //program objective
  string instructions = "Just watch...\n\n"; //user instructions
  ifstream fin;
  int unsortscores[SIZE];
  int sortscores[SIZE];
  int ascores;
  int nscores=0;
  int kscores=0;
  int i;
  int sum =0;
  int max = 0;
  int min = 100;
  int count = 0;
  double average;
  int largenumber =0;
  int perfect = 0;

  //user introduction
  introduction(objective, instructions);

  //open file name
  fin.open("scores.txt");
  if (!fin.good()) throw "I/O error";
  while(fin.good())
  {
    fin >> ascores;
    fin.ignore(1000,10);
    unsortscores[kscores++] = ascores;
    //cout << ascores;
  if( ascores >=0 && ascores <=100)
   {
    sortscores[nscores++] = ascores;
   }
  }

  for(i=0;i<nscores;i++)
  {
   count = 1;
   sum = sum + sortscores[i];
   if(max < sortscores[i]) max = sortscores[i];
   if(min > sortscores[i]) min = sortscores[i];
   if(sortscores[i] == 100) perfect = perfect + 1;
  }

  if(count == 1)
  {
   average = (double)sum / nscores;
   for(i=0;i<nscores;i++)
   {
    if(sortscores[i] > average) largenumber = largenumber + 1;
   }
    cout << "Unsorted scores : ";
    outputArray(unsortscores, kscores);
    cout << endl;
    cout << "Sorted scores : ";
    outputArray(sortscores, nscores);
    cout << endl;
    cout << "The higest score : " << max << endl;
    cout << "The lowest score : " << min << endl;
    cout << "The average score : " << average << endl;
    cout << "Number of scores larger than average are " << largenumber << endl;
    cout << "Number of scores equal to 100 are " << perfect << endl;
  }
  if(count == 0)
  {
   cout << " Empty File! " << endl; 
  } 
  
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
void outputArray(int* a, int i)
{
  int t;
  for (t=0; t<i; t++)
  {
  cout << a[t] << ' '; 
  }
}