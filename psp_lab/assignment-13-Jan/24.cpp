/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

int fib(int);

int main()
{
    int n;
    cout << "Enter a number to calculate its fibonacci: ";
    cin >> n;
    cout << "Fibonacci = " << fib(n) << endl;
    return 0;
}

int fib(int n)
{
	int f1, f2, temp;
	f1 = 0;
	f2 = 1;
	while(n > 0)
	{
		temp = f2;
		f2 += f1;
		f1 = temp;
		n--;
	}
	return f2;
}