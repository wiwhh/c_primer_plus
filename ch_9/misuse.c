/* misuse.c -- uses a function incorrectly */
#include <stdio.h>
#include <stdlib.h>
int imax();      /* old-style declaration */

int main(void)
{
    printf("The maximum of %d and %d is %d.\n",
           3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n",
           3, 5, imax(3.0, 5.0));
    system("pause");
    return 0;
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}