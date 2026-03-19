#include <stdio.h>
#include <string.h>
#define LIM 5
int main(void)
{
    char line[LIM];
    char * find;

    fgets(line, LIM, stdin);
    find = strchr(line, '\n');
    if (find)
        *find = '\0';
    fputs(line, stdout);

    return 0;
}