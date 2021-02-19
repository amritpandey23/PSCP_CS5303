/* TITLE: In a town, the percentage of men is 52. 
The percentage of total literacy is 48. If total 
percentage of literate men is 35 of the total 
population, write a program to find the total 
number of illiterate men and women if the 
population of the town is 80,000.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;
int main ()
{
    int pop, pop_men, pop_wmn, pop_lit, poilit, litmen, ilitmen, litwomen, ilitwomen;
    pop = 80000;
    pop_men = (52 * pop) / 100;
    pop_wmn = pop - pop_men;
    pop_lit = (48 * pop) / 100;
    litmen = (35 * pop) / 100;
    litwomen = pop_lit - litmen;
    ilitmen = pop_men - litmen;
    ilitwomen = pop_wmn - litwomen;
    cout << "\n\t\t\tDATA\n\n";
    cout << "_____________________________________________\n\n";
    cout << "Total population of the city     = " << pop << endl;
    cout << "Total population of men          = " << pop_men << endl;
    cout << "Total population of women        = " << pop_wmn << endl;
    cout << "Literate population of men       = " << litmen << endl;
    cout << "Literate population of women     = " << litwomen << endl;
    cout << "Illiterate population of men     = " << ilitmen << endl;
    cout << "Illiterate population of women   = " << ilitwomen << endl;
    return 0;
}