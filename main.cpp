#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double a,b,c;
  cin >> a >> b >> c;
  double D(b*b-4*a*c);
  if (D<0) {
    cout << "No roots.";
    } 
  if (D==0) {
    cout << (-1*b)/2/a;
    }
  if (D>0) {
    cout << ((-1*b+sqrt(D))/2/a) << ((-1*b-sqrt(D))/2/a);
    }
}