#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUppper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char * find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if (find)
        *find = '\0';
    ToUppper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;
}

void ToUppper(char * str)
{
    while (*str)
    {
        *str = toupper(*str); //利用toupper()函数处理字符串中的每个字符，把整个字符串转换成大写。
        str++;
    }
}

int PunctCount(const char * str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str)) //利用ispunct()函数统计字符串中的标点符号个数。
            ct++;
        str++;
    }

    return ct;
} 