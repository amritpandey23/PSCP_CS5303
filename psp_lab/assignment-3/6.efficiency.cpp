/*
TITLE: Question 6.efficiency, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 13 Jan 2021
*/

#include <iostream>
using namespace std;

int main() {
	int eff;
	cout << "Enter efficiency of worker: ";
	cin >> eff;
	if (eff >= 2 && eff < 3)
		cout << "You are an efficent worker. Keep it up!\n";
	if (eff >= 3 && eff < 4)
		cout << "You need to improve your efficiency.\n";
	if (eff >= 4 && eff < 5)
		cout << "Wrap up the work, you are going in for training.\n";
	if (eff > 5)
		cout << "Pack your bag and leave. There is no place for lethargic people in our company.\n";
    return 0;
}