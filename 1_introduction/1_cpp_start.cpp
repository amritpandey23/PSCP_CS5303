/* TOPIC: Skeleton of C++ program 
DATE: 31 Dec 2020
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream> // iostream file contains cout, cin object and other related information
using namespace std;

int main() /* the starting function of any C++ program */
{
    string name; /* name variable declared of type STRING */
    cout << "Enter you name: "; /* prints message console */
    cin >> name; /* take input from user and store in name variable */
    cout << "Hello "; /* prints Hello <name>! on the console */
    cout << name << "!\n";
    return 0; /* successful execution is shown by returning 0 */
}