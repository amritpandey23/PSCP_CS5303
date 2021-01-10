/* TITLE: design a simple calculator using switch break 
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */
#include <iostream>
using namespace std;

int main()
{
    int ch, n1, n2;
    cout << "Welcome to Calculator program\n";
    cout << "1) Addition\n";
    cout << "2) Substraction\n";
    cout << "3) Multiplication\n";
    cout << "4) Division\n";
    cout << "5) Exit\n";
    cout << "Choose your operation: ";
    cin >> ch;
    switch(ch) {
        case 1:
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << n1 << "+" << n2 << "=" << (n1+n2) << endl;
            break;
        case 2:
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << n1 << "-" << n2 << "=" << (n1-n2) << endl;
            break;
        case 3:
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << n1 << "*" << n2 << "=" << (n1*n2) << endl;
            break;
        case 4:
            cout << "Enter numerator: ";
            cin >> n1;
            cout << "Enter denominator: ";
            cin >> n2;
            cout << n1 << "/" << n2 << "=" << ((float)n1/(float)n2) << endl;
            break;
        case 5:
            cout << "exiting ... bye!\n";
            exit(0);
            break;
        defaut:
            cout << "Invalid response, try again.";
    }
    return 0;
}