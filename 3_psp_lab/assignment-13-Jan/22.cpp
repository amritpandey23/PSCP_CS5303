/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

int choice();
int toBinary();
int toOctal();

int main ()
{
 int convert=choice();
 switch (convert)
 {
  case (0):
    toBinary();
    break;

  case (1):
    toOctal();
    break;
 }
  return 0;
}

int choice ()
{
 int convert;
 cout<<"Enter Your Choice of Conversion";
 cout<<"\nConvert the decimal into the following:";
 cout<<"\n0-[B]inary";
 cout<<"\n1-[O]ctal";
 cin>>convert;
 return convert;
}

int toBinary ()
{
 int num;
 int answer=0;

 cout<<"Please enter a decimal";
 cin>>num;

 while (num>0)
 {
  answer=num%2;
  num=num/2;
  cout <<answer<<" ";
  }
 return answer;
}

int toOctal()
{
		int num;
		int answer=0;

		 cout<<"Please enter a decimal: ";
		 cin>>num;

			 while(num>0)
			 {
			 answer=num%8;
			 num=num/8;
			 cout<<answer<< " ";
			 }
    return answer;
}