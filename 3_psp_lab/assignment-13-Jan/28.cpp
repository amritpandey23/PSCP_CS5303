/* TITLE:
DATE:
AUTHOR: Amrit Pandey MC20103*/
#include <iostream>
using namespace std;

int power(int, int);

int main() {
  int a, i;
  cout << "Enter number and its power: ";
  cin >> a >> i;
  cout << "Result = " << power(a, i) << endl;
  return 0;
}

int power(int a, int i)
{
    int res;
    res = 1;
    while (i != 0)
    {
        res *= a;
        i--;
    }
    return res;
}