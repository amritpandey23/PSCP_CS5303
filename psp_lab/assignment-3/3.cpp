/*
TITLE: Question 3, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 13 Jan 2021
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int health, age, residence, gender;
    
    cout << "Health situation\n\t1)Excellent\t2)Poor\nChoice: ";
    cin >> health;
    cout << "Age: ";
    cin >> age;
    cout << "Residence area\n\t1)Urban\t2)Rural\nChoice: ";
    cin >> residence;
    cout << "Gender\n\t1)Male\t2)Female\nChoice: ";
    cin >> gender;

    if (                                        /* Condition 1 & 2 */
        health == 1 &&
        (age >= 25 && age < 35) &&
        residence == 1
    ) {
        if (gender == 1) {
            cout << "Your premium is Rs. 4000/-.\n";
            cout << "Your policy cannot exceed more than Rs. 2 Lakhs.\n";
        } else {
            cout << "Your premium is Rs. 3000/-.\n";
            cout << "Your policy cannot exceed more than Rs. 1 Lakhs.\n";
        }
        return 0;
    }

    if (                                        /* Condition 3 */
        health == 2 && 
        (age >= 25 && age < 35) && 
        residence == 2 && 
        gender == 1
    ) {
        cout << "Your premium is Rs. 6000/-.\n";
        cout << "Your policy cannot exceed more than Rs. 10,000.\n";
        return 0;
    }

    cout << "Sorry, you are not insured!\n";   /* Condition 4 */
    return 0;
}