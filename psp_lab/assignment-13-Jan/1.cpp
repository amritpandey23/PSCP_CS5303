/* TITLE:
DATE:
AUTHOR: */
#include <iostream>
using namespace std;

int main() {
  int n, d1, d4;
  cout << "Enter a four digit +ve number: ";
  cin >> n;
  cout << "Sum of first and last digit of " << n << " = ";
  d1 = n % 10;
  n /= 1000;
  d4 = n;
  cout << d1 + d4 << endl;
  return 0;
}