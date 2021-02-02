/* TITLE: 2. Write a program to get following output
      * 
    * * * 
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * * 
      *
DATE:
AUTHOR: Amrit Pandey MC20103 */

#include <stdio.h>
#define REV 1
#define FOR 0

void pattern(int, int);

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    pattern(n, FOR);
    pattern(n, REV);
    return 0;
}

// Prints pattern of stars
void pattern(int n, int d)
{
    int sp = n - 1;
    if (d == 0) 
    {
        for(int i = 1; i <= n; i++) 
        {
            for(int k = sp; k > 0; k--)
            {
                printf(" ");
            }
            for(int j = 1; j<=i; j++)
            {
                printf("* ");
            }
            printf("\n");
            sp--;
        }
    } 
    else if (d == 1) 
    {
        sp = 0;
        for(int i=(n-1); i>0; i--)
        {
            for(int k = 0; k <= sp; k++)
            {
                printf(" ");
            }
            for(int j = 1; j<=i; j++)
            {
                printf("* ");
            }
            printf("\n");
            sp++;
        }
    }
}