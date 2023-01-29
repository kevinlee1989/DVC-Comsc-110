//Objective:  sort the data in an array
//Name: Teacher
//Course: COMSC-110-5003
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> //console IO 
#include <string> // string manipulation
using namespace std;
#include <cctype> //using toupper

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
const int SIZE = 7; //size of array day

//Programmer defined functions
void introduction(string obj); //program introduction
void outputArray(string* a);
void sortArray(string* a); //sort the values in the array
string changeCase(string s); //change the case of the value to all uppercase

//main program
int main()
{
int a;
int num;
cout << "input number: ";
cin >> a;
int x[a];

for(int i =0; i < a; i++){
cin >> num;
x[i] = num;
}

for(int i=0;i<a;i++){
  if( i % 2 ==1){
    x[i] = x[i] %2 ;
    }
  else{
    x[i] = x[i] % 3;
   }
  }

for(int i=0;i<a;i++){
cout << "real number " <<  x[i] << endl;
}



}//main

