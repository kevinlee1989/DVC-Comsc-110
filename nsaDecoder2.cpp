//Objective:  The program will decode the entered text so that each character is converted to the next character in the ASCII code.
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
const int SIZE = 5;

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
string getFileName();
string decode(string a , int* offset);


//main program
int main()
{
  //Data
  string objective = "The program will be a template for C++ programs and to test code.\n"; //program objective
  string instructions = "Decode the entered text so that each character is converted to the next character in the ASCII code. That is, convert 'B' to 'A', '5' to '4', '+' to '*', etc. So the word Ifmmp will appear as Hello in decoded form. Remember a line of text contains multiple characters, and each character has an ASCII value, and by subtracting 1 to that ASCII value results in the next character in the ASCII table.\n\n"; //user instructions 
  int offset[SIZE] ={5, -8, -12,-6, -1};
  string fileName;
  ofstream fout;
  ifstream fin;
  string first;
  string second;
  string third;
  string forth;
  int r;
  int i;

  //user introduction
  introduction(objective, instructions);

  //read input file
  fileName = getFileName();
  string nsaEncode = "nsaEncode.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";
  fout.open(nsaEncode.c_str(), ios::app);
  if (!fout.good()) throw "I/O error";
  getline(fin,first);
  getline(fin,second);
  getline(fin,third);
  getline(fin,forth);

  // prompt the user
  cout << "Enter a line of text:";
  cin >> r;

  //decode the sentence
  if(r==1) 
  {
   first = decode(first,offset);
   cout << first;
  }
  if(r==2)  
  {
   second = decode(second,offset);
   cout << second;
  }
  if(r==3)  
  {
   third = decode(third,offset);
   cout << third;
  }
  if(r==4)  
  {
   forth = decode(forth,offset);
   cout << forth;
  }
  if ( r > 4 )
  {
   cout << " there are no line " << endl;
  }
  
  //output result
  if(r ==1) fout << first << endl;
  if(r ==2) fout << second << endl;
  if(r ==3) fout << third << endl;
  if(r ==4) fout << forth << endl;
  fout.close();
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

string decode(string a, int* offset)
{
  //data
  int index;
  int i=0;
  char keepGoing;

 while (true)
  {
   if (i >= a.length()) 
   {
    if (i >0)
   {
    cout << " finish encoding the line!" << endl;
    break;
   }
    else
   {
    cout << "empty file" << endl;
    break;
   }
  }
   index = i % SIZE;
   cout << offset[index] << endl;
   a[i] = a[i] + offset[index]  ; // 
   i = i + 1;
   cout << "Do you want to keep going? [Y/N] : ";
   cin >> keepGoing;
   cin.ignore(1000,10);
   if (keepGoing =='n' || keepGoing == 'N') break;
  }
   return a;
}