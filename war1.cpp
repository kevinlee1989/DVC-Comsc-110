//Objective:   to play the card game war
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

//Programmer defined data types



//Special compiler dependent definitions
//NONE

//global constants/variables

//Programmer defined functions

int max(int num1, int num2){
	return (num1>num2 ? num1 : num2);
}
//main program
int main()
{

int num1=3;
int num2=6;


cout << max(num1,num2);
}