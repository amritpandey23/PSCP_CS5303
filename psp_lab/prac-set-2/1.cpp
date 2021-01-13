/* Q.1: Evaluate the following expressions ... 

TOPIC: Question 1 {a, b, c, d}, Practice Set 2, PSP Lab
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

float a(); /* Question 1.a */
int b(); /* Question 1.b */
int c(); /* Question 1.c */
int d(); /* Question 1.d */

int main()
{
    printf("1.a = %f\n", a()); /* OUTPUT: 3.833333 */
    printf("2.a = %d\n", b()); /* OUTPUT: 8 */
    printf("3.a = %d\n", c()); /* OUTPUT: -1 */
    printf("4.a = %d\n", d()); /* OUTPUT: -3 */
}

float a()
{
    int big;
    float abc, g;
    abc = 2.5; big = 2;
    g = big/2+big*4/big-big+abc/3;
    return g;
}

int b()
{
    int ink, act, on;
    float tig;
    ink = 4; act = 1; tig = 3.2;
    on = ink*act/2+3/2*act+2+tig;
    return on;
}

int c()
{
    int qui, add, god, s;
    qui = 4; add = 2; god = 2;
    s = qui*add/4-6/2+2/3*6/god;
    return s;
}

int d()
{
    int a, g, s;
    a = 4; g = 3;
    s = 1/3*a/4-6/2+2/3*6/g;
    return s;
}