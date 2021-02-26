/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

class Cmp {
    public:
        int a;
        Cmp(int a)
        {
            this->a = a;
        }
        void add(Cmp c)
        {
            a += c.a;
        }
};

int main()
{
    Cmp a1(5), a2(6);
    a1.add(a2);
    cout << a1.a << endl; 
    return 0;
}