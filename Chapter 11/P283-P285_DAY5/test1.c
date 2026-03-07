#include <stdio.h>
#define STLEN 8
int main(void)
{
    char words[STLEN];

    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done!");
    
    return 0;
}

//输入“123456789”时，也会输出“123456789”