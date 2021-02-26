/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

class Num {
    public:
        int a;
        Num(int a = 0)
        {
            this->a = a;
        }
        Num add(Num n1, Num n2)
        {
            Num temp(n1.a + n2.a);
            return temp;
        }
};

int main()
{
    Num a(5), b(6);
    Num c;
    c = c.add(a, b);
    cout << c.a << endl;
    return 0;
}