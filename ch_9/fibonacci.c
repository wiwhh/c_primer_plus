#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);      /* old-style declaration */

int main(void)
{
    int num;
    printf("请输入一个整数：\n");
    while(scanf("%d",&num)==1)
    {    
        
        printf("该数对应的斐波那契数为：%d\n",fibonacci(num));
        printf("请输入q退出：\n");
        printf("请输入一个整数：\n");
    }
    system("pause");
    return 0;
}

int fibonacci(int n)
{
    return (n > 2 ? (fibonacci(n-1)+fibonacci(n-2)) : 1);
}