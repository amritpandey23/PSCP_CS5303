/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

int count_odd(int []);

int main()
{
    // Write here
    int s[] = {1, 3, 5, 7, 9, 2, 3, 4, 5, 8};
    cout << "Total odd numbers = " << count_odd(s) <<endl;
    return 0;
}

int count_odd(int s[10])
{
    static int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] % 2 != 0)
        {
            count++;
        }
    }
    
    return count;
}
