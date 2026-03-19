#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt(char *strings [], int num);
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL  //输入input数组，限定5行，每行最多81字符，多出81的部分抛弃
            && input[ct][0] != '\0')                    //退出条件
    {
        ptstr[ct] = input[ct]; //将input数组中5个内含81个字符的字符串首元素的地址分别赋予prstr数组的5个指针元素
        ct++;
    }
    stsrt(ptstr, ct);

    //输出结果
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);

    return 0;
}

void stsrt(char *strings [], int num)//输入5个指针，对应值为5个字符串的首位
{
    char * temp;
    int top, seek;

    //数组中某个字符串首元素如果再ASCII中在其后面的某个字符串首元素之后，则两字符串调换位置
    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

char * s_gets(char * st, int n)
{
    char * find;

    fgets(st, n , stdin);
    find = strchr(st, '\n');
    if (find)
        *find = '\0';

    return st;
}