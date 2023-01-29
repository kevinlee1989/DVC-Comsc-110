#include <iostream>

using namespace std;
void DisplayTime(int hours, int minutes, int seconds);
void DisplayTime(int hours, int minutes, int seconds) {

  // Parameter error checking

  if ((hours < 1) || (hours > 12)) {

     cout << "Invalid hours ";

     hours = 1;

  }

  if ((minutes < 1) || (minutes > 60)) {

     cout << "Invalid minutes ";

     minutes = 1;

  }

   if ((seconds < 1) || (seconds > 60)) {

     cout << "Invalid seconds ";

     seconds = 1;

  }

  cout << hours << ":" << minutes << ":" << seconds;

}


int main() {

DisplayTime(2,24,65);

}