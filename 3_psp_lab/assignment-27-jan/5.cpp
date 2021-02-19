/* TITLE: If cost price and selling price of an item is 
input through the keyboard, write a program to determine 
whether the seller has made profit or incurred loss. 
Also determine how much profit he made or loss he incurred.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include<iostream>
using namespace std;

int main()
{
	int cp,sp,res;

	cout<<"Cost price of item : ";
	cin>>cp;
	cout<<"Selling price of item : ";
	cin>>sp;

	res=sp-cp;

	if(res > 0)
    {
		cout << "Profit gain = " << res;
    }
	else
    {
		if (res < 0)
        {
    			cout<<"Loss incurred = "<< -res;
        }
		else
        {
			cout<<"Neither profit not loss incurred.";
        }
    }
	return 0;
}
