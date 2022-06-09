#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    while((ch = getchar()) != EOF) //当没有检测到文件结尾时，就一直运行
        putchar(ch); //        
    system("pause");
    return 0;
}