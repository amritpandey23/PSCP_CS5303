/* TITLE: In a class there are n number of students – 
each studying m subjects. Marks of each of the student 
in each of the subjects are to be read and class average 
in each subject and the average of total marks in all 
subjects to be computed.
• There is no need to store the values – No need to 
use arrays – Assume that m is 3 and use sentinel -100 
to end inputs. Output marks in each subject and total 
obtained by each student in a row and subject average 
and class average in the last row.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

/* 
+----------+
|INCOMPLETE|
+----------+
WASN'T ABLE TO UNDERSTAND QUESTION */

#include <iostream>
using namespace std;
#define SUB 3

void prompt(int *, int *, int *, int *, int *, int *);

int main()
{
    int m1, m2, m3, s1, s2, s3;
    m1 = m2 = m3 = s1 = s2 = s3 = 0;
    return 0;
}

void prompt(int *m1, int *m2, int *m3, int *s1, int *s2, int *s3)
{
    int _m1, _m2, _m3, _s1, _s2, _s3;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter for student 1: " << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Marks in S1: ";
            cin >> _m1;
            *m1 += _m1;
            *s1 += _m1;
        }
    }
}