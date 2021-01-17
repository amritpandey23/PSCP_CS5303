#include <iostream>
using namespace std;
#define POPULATION 9000

int main()
{
    int pop, yr;
    yr = 1; pop = POPULATION;
    while(true)
    {
        cout << "Year " << yr << ": " << pop << endl;
        pop = pop*1.15;
        ++yr;
        if (pop >= 50000)
        {
            cout << "* Year " << yr << ": " << pop;
            cout << " Population surpassed 50,000!" << endl;
            break;
        }
    }
    return 0;
}