#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    while((ch = getchar()) != '#') //当输入不为#，就一直运行
        putchar(ch); //        
    system("pause");
    return 0;
}