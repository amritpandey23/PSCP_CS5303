/* TITLE:
DATE:
AUTHOR: */
#include <iostream>
using namespace std;

int menu();
int takeInput();
int fact(int);
bool isPrime(int);
void isEven(int);
int fib(int);

int main()
{
	unsigned int res;
	while(true)
	{
		switch(menu())
		{
		case 1:
			res = fact(takeInput());
			cout << "Factorial = " << res << endl;
			break;
		case 2:
			res = isPrime(takeInput());
			if (res)
			{
				cout << "It is a prime number." << endl;
			}
			else
			{
				cout << "It is not a prime number." << endl;
			}
			break;
		case 3:
			isEven(takeInput());
			break;
		case 4:
			res = fib(takeInput());
			cout << "Fibonacci = " << res << endl;
			break;
		default:
			cout << "Exiting 👋 ";
			exit(0);
		}
		cout << "-- X --\n";
	}

  return 0;
}

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

bool isPrime(int n)
{
	if (n < 0 || n == 1)
	{
		return false;
	}
	if (n != 2)
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void isEven(int n)
{
	if (n % 2 == 0)
	{
		cout << n  << " is an even number." << endl;
	}
	else
	{
		cout << n  << " is an odd number." << endl;
	}
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

int menu()
{
    int n;
    cout << "Choose one option from the menu\n";
    cout << "1. Factorial\n";
    cout << "2. Prime or Not\n";
    cout << "3. Odd or Even\n";
    cout << "4. Fibonnaci of a Number\n";
    cout << "5. EXIT\n";
    cin >> n;
    return n;
}

int takeInput()
{
	int r;
	cout << "Enter number: ";
	cin >> r;
	return r;
}
