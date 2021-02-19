/* TITLE: Given three points (x1, y1), (x2, y2) and (x3, y3), 
write a program to check if all the three points fall on one 
straight line.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;

void check_coll(int, int, int, int, int, int);

int main() 
{ 
	int x1, x2, x3, y1, y2, y3;
    cout << "Enter x1, x2, x3, y1, y2, y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	check_coll(x1, y1, x2, y2, x3, y3); 
	return 0; 
} 


void check_coll(
    int x1, int y1, int x2, 
    int y2, int x3, int y3
) 
{ 
	int a;
    a = x1 * (y2 - y3);
    a += x2 * (y3 - y1); 
    a += x3 * (y1 - y2); 

	if (a == 0) 
    {
        cout << "Points fall in one straight line." << endl;
    } 
	else
    {
		cout << "Points DOESN'T fall in one straight line." << endl;
    }
}
