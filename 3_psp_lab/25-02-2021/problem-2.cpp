/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

class CalcPrime {
    private:
        int a;
        int net;
    public:
        CalcPrime(int a = 3)
        {
            this->a = a;
            net = 0;
        }
        int calculate_total_primes()
        {
            for (int i = 2; i < a; i++)
            {
                for (int j = 2; j < i; j++)
                {
                    if (i%j == 0)
                    {
                        break;
                    }
                }
            }
        }
};

int main()
{
    
    return 0;
}