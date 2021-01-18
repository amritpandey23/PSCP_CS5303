/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

int takeInput();
void run();

int main()
{
    run();
    return 0;
}

void run()
{
    int max, ctr, tmp;
    ctr = 0;
    while (true)
    {
        tmp = takeInput();
        if (tmp == 32767)
        {
            break;
        }
        if (ctr == 0)
        {
            max = tmp;
            ctr = 1;
        }
        else
        {
            if (tmp > max)
            {
                max = tmp;
                ctr = 1;
            }
            else if (tmp == max)
            {
                ctr += 1;
            }
        }
    }
    cout << "\nMaximum input: " << max << ", Frequency: " << ctr << endl;
}

int takeInput()
{
    int r;
    cout << "Enter number: ";
    cin >> r;
    return r;
}