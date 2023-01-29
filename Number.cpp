#include <iostream>

using namespace std; 

int Fibo(int N) {

   if(N == 1)

      return Fibo(N - 1);

   else if(N == 2)

      return Fibo(N - 2); 

   else

      return 0;  

}




int main() {

   int N;       

   N = 10;

   cout << "F_" << N << " is "  << Fibo(N) << endl;

   return 0;

}
