/* TITLE: Given the coordinates (x, y) of a center of a 
circle and its radius, write a program which will determine 
whether a given point lies inside the circle, on the circle 
or outside the circle.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std; 
#define CIRCLE_X 0
#define CIRCLE_Y 1
#define RADIUS 2

bool liesIn(int, int, int, int, int);

int main() 
{ 
	int x,y;
    cout << "Enter coordinates(x,y): ";
    cin >> x >> y;
	liesIn(CIRCLE_X, CIRCLE_Y, RADIUS, x, y) ? 
	    cout << "Point lies inside" << endl : 
        cout << "Point lies outside" << endl; 
    return 0;
} 

bool liesIn(
    int circle_x, int circle_y, 
	int rad, int x, int y
) 
{
    int temp;
    temp = (x - circle_x) * (x - circle_x);
    temp += (y - circle_y) * (y - circle_y);
	if (temp <= rad * rad) 
	{
        return true; 
    }
	else
    {
		return false; 
    }
} 
