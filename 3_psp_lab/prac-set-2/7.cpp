/* Q.7: The mark price and discount is entered 
through keyboard. Sometimes seller gets profit 
of x % or some time loss of y % depends on discount. 
Write a program to determine whether the seller 
has made profit or incurred loss. Also determine 
how much profit he made or loss incurred.

TITLE: Question 7, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
#define SELLING_PRICE 15000                 /* selling price the item */
using namespace std;

int main()
{
    float dis, mp, diff;
    cout << "The Selling Price is assumed to be Rs. 15000.00\n";
    cout << "Enter Marked Price and Discount(% <= 100) for the item: ";
    cin >> mp >> dis;
    diff = mp*(1-(dis/100)) - SELLING_PRICE;/* difference */

    if (diff < 0) {
        cout << "You've incurred a loss of ";
        cout << (float)(-1*diff/SELLING_PRICE*100);
        cout << "% or Rs." << diff*-1 << endl;
    }
    else if (diff == 0) {
        cout << "You've sold the item at the marked price";
    }
    else {
        cout << "You've incurred a gain of ";
        cout << (float)(diff/SELLING_PRICE*100);
        cout << "% or Rs." << diff << endl;
    }
}