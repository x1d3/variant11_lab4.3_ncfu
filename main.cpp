#include <iostream>
#include <cmath>
using namespace std;
int main() {
   double R, T, M, V;
   T=0;
   R = 8.31;
   M = 0.044;
   do {
       V = sqrt((3*R*T)/M);
       T = T + 5;
       V = V/3.6;
       cout << V << endl;
   }while (T<=30);

    return 0;
}
