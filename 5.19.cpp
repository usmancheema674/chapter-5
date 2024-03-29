#include <iostream>

using namespace std;

int main() {

   double pi{ 0.0 };

   cout << "Step\tPi\n" << endl;

   for ( int i{ 1 }; i <= 20; ++i ) {

      double term{ 4.0 / ( i * 2 - 1 ) };

      i % 2 ? pi += term : pi -= term;

      cout << i << '\t' << pi << endl;    }

   return 0;
}
