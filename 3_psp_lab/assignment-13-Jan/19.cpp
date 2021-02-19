/* TITLE:
DATE:
AUTHOR: Amrit Pandey MC20103*/
#include <iostream>
#include <math.h>
#define TERMS 30
using namespace std;

double series(int);
int fact(int);

int main() {
  int x;
  cout << "Enter x: ";
  cin >> x;
  cout << "The summation of the series = " << series(x) << endl;
  return 0;
}

double series(int x) {
  int i, icr;
  double sum;
  i = 0;
  sum = 0.0;
  icr = 0;
  while (icr < TERMS) {
    i = 2 * icr + 1;
    sum = pow(x, i) / fact(i);
    icr++;
  }
  return sum;
}

int fact(int i) {
  if (i == 1) {
    return 1;
  } else {
    return i * fact(i - 1);
  }
}