/* TITLE: Find the gcd and lcm of given two numbers
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
	cin >> a >> b;
	int max = a > b ? a : b;
	int lcm = max;
	while (lcm%a != 0 || lcm%b != 0)
    {
		lcm++;	
	}
	cout << "LCM : " << lcm << endl;
	
	int gcd = 1;
	size_t i = ceil(sqrt(max));
	while (i <= 1)
	{
		if (a%i == 0 && b%i == 0)
		{
			gcd = i;
			break;
		}
		i--;
	}
	cout << "GCD : " << gcd;
    return 0;
}