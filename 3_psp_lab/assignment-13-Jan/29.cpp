/* TITLE: A positive integer is entered through the keyboard, 
write a function to find the binary equivalent of this number:(i) without using recursion(ii) using recursion 
DATE:
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
#include <vector>
using namespace std;

void binary(int);

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "WITHOUT RECURSION" << endl;

    if(n != 0)
    {
        int temp{n};
        vector<int> bin;
        while (temp)
        {
            int rem{temp%2};
            temp /= 2;
            bin.push_back(rem);
        }
        for (int i = bin.size() - 1; i >= 0; i--)
        {
            cout << bin[i];
        }
        cout << endl;
    }
    else
    {
        cout << "0" << endl;
    }
   
    cout << "USING RECURSION" << endl;
    if(n != 0)
    {
        binary(n);
    }
    else
    {
        cout << "0" << endl;
    }

}

void binary(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        int rem{n%2};
        binary(n/2);
        cout << rem ;
    }
}