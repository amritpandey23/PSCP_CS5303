/* TITLE:
DATE:
AUTHOR: */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b, c, r1, r2;
  cout << "Enter A, B and C constants of quadratic equation: ";
  cin >> a >> b >> c;
  if (b * b - 4 * a * c < 0) {
    cout << "This program does not support imaginary roots." << endl;
    return 0;
  }
  r1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  r2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "The roots are " << r1 << ", " << r2 << endl;
  return 0;
}