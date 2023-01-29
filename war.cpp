//Objective:   to play the card game war
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;


//Programmer defined data types


//Special compiler dependent definitions
//NONE

//global constants/variables

//Programmer defined functions


#include <iostream>

#include <vector>

using namespace std;





int main() {

const int MAX_LEN = 10;      

char userStr[MAX_LEN] = "PASS123";      

int i;

for (i = 0; userStr[i] != '\0'; ++i) {

   userStr[i] = tolower(userStr[i]);

}
for (i = 0; userStr[i] != '\0'; ++i) {

   cout << userStr[i];

}
}