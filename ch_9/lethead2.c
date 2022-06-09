/* lethead2.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>            /* 为 strlen()提供原型 */
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
    int spaces;
    
    show_n_char('*', WIDTH);   /* 使用符号常量作为参数 */
    putchar('\n');
    show_n_char(SPACE, 12);    /* 使用符号常量作为参数*/
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;
 
    show_n_char(SPACE, spaces);/* 使用符号变量作为参数   */
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
    /* an expression as argument    */
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
    system("pause");
    return 0;
}

/* show_n_char() definition */
void show_n_char(char ch, int num)
{
    int count;
    
    for (count = 1; count <= num; count++)
        putchar(ch);
}