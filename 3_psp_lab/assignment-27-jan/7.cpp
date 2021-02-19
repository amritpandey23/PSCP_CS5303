/* TITLE: Write a program to check whether a triangle 
is valid or not, when the three angles of the triangle 
are entered through the keyboard. A triangle is valid 
if the sum of all the three angles is equal to 180 
degrees.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include<iostream>
using namespace std;

int main()
{
	int ang1,ang2,ang3;
	cout<<"Enter the three angles of triangle: ";
	cin >> ang1 >> ang2 >> ang3;

	if (ang1 + ang2 + ang3 == 180)
    {
		cout << "Triang is valid";
    }
	else
    {
		cout << "Triang is not valid";
    }

	return 0;
}
