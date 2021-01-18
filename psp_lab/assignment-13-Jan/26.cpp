/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <stdio.h>

int main()
{
    int n;
    float pi;
    pi = 0.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++)
    {
        pi += pow(-1, i)/(2*i + 1);
    }
    pi *= 4;
    printf("Computed value of PI = %.3f\n", pi);
    return 0;
}