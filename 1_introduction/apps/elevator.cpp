/* TITLE: to create a program which decides if a building requires
elevator based on certain height conditions
DATE: 02 Jan 2021
AUTHOR: Amrit Pandey @ok_ape*/
#include <iostream>
using namespace std;

int main() {
    int flr_h, flr_x; /* floor height, total floors in building */
    cout << "Enter height of individual floor: ";
    cin >> flr_h;
    cout << "Enter total number of floors: ";
    cin >> flr_x;
    /* if flr_h >= 15m or flr_x >= 5 or flr_h*flr_x >= 45:
            provide elevator
        else:
            do elevator is not necessary
    */
    flr_h >= 15 || flr_x >= 5 || flr_h*flr_x >= 45 ? 
    cout << "Elevator will be provided in the building.\n" :
    cout << "Elevator will not be provided in the building.\n";

    return 0;
}