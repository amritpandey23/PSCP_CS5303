/* TITLE: Given the length and breadth of a rectangle, 
write a program to find whether the area of the rectangle 
is greater than its perimeter. For example, the area of 
the rectangle with length =5 and breadth = 4 is greater 
than its perimeter.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;
int main() 
{
	int l, b, peri, ar;

	cout << "Enter length and breadth: ";
	cin >> l >> b;
	
	ar = l*b;
	peri = 2 * (l + b);
	
	cout << "Area = " << ar << endl;
	cout << "Perimeter = " << peri;
	
	if (ar > peri)
    {
		cout << "Area > Perimeter" << endl;
    }
	else if (ar < peri)
    {
		cout << "Area < Perimeter" << endl;
    }
	else
    {
		cout << "Area = Perimeter" << endl;
    }
    
    return 0;
}
