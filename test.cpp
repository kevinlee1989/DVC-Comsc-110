//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-5003
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
//FIXME: stream manipulation library
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
string userInput = " ";
string author;
int point;
string set;

		while(userInput != "-1"){
			cout<<"Enter a data point (-1 to stop input): " << endl;
			getline(cin,userInput);
			string pointString="";
			author = userInput.substr(0,userInput.find(","));
			int i = userInput.find(",") +2;
			while(userInput[i] != '\0'){
				pointString = pointString + userInput[i];
				i = i + 1;
			}
			stringstream inSS(pointString);
			inSS >> point;
			cout << author << endl;
			cout <<  point << endl;
		}

   } 