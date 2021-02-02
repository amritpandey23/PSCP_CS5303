/* TITLE: 2. Write a program to get following output
    1 
   1 1 
  1 2 1
 1 3 3 1
1 4 6 4 1
 1 3 3 1
  1 2 1
   1 1 
    1
DATE:
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter width of the pattern: ";
    cin >> n;

    int start, c, remain, space;
    c = 1;

    for (start = 0; start < ceil(n/2.0); start++)
    {
        for (int i = 1; i < ceil(n/2.0) - start; i++)
        {
            cout << " ";
        }
        for (int j = 0; j <= start; j++)
        {
            if (start == 0 || j == 0)
            {
                c = 1;  
            }
            else
            {
                c = c*(start-j+1)/j;
            }
            cout << c << " ";
        }
        cout << endl;
    }

    remain = n - start;
    space = (n%2);
    for (int end = remain - 1; end >= 0; end--)
    {
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        for (int j = 0; j <= end; j++)
        {
            if (end == 0 || j == 0)
            {
                c = 1;  
            }
            else
            {
                c = c*(end-j+1)/j;
            }
            cout << c << " ";
        }
        cout << endl;
        space++;
    }
    return 0;
}