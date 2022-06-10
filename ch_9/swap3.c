#include <stdlib.h>
#include <stdio.h>
void interchange(int *, int *); /* declare function */

int main(void)
{
    int x = 5, y = 10;
    
    printf("Originally x = %d and y = %d.\n", x , y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
    system("pause");
    return 0;
}

void interchange(int * u, int * v)  /* define function  */
{
    int temp;
    
    temp = *u;
    *u = *v;
    *v = temp;
}