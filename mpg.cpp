#include <iostream> 

using namespace std; 





class School { 

   

   public: 

      School() { y++; } 

      static int getY() {return y;} 

   private:

      static int y;

}; 





int School::y = 0; 





int main() { 

   cout << School::getY() << " "; 

   School t[5]; 

   cout << School::getY(); 

}