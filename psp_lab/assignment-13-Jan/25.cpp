/* TITLE:
DATE:
AUTHOR: Amrit Pandey MC20103*/
#include <stdio.h>

int main() {
    unsigned char i;
    i = 33;                             // printable character
    printf("VALUE\tCHARACTER\n");
    while(i < 128)
    {
        printf("%d\t%c\n", i, i);
        i++;
    }
  return 0;
}