#include <stdio.h>
#include <string.h>

#define ANSWER "GRANT"
#define SIZE 40
char * s_gets(char * st, int n);
void turn_capital(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER))
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    turn_capital(st, n);
    return ret_val;
}

void turn_capital(char * st, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
            st[i] += 'A' - 'a';
    }
}