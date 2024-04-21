#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转直角三角形图案。
//多组输入，一个整数（2~20），表示翻转直角三角形直角边的长度，即“*”的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用“* ”组成的对应长度的翻转直角三角形，每个“* ”后面有一个空格。
int main()
{
    int a, i, j;
    while (scanf("%d", &a) != EOF)
    {
        for (i = 1; i <= a; i++)
        {
            for (j = 0; j <= a - i; j++)
            {
                printf("* ");//5 4
            }
            printf("\n");
        }
    }
}