#include <stdio.h>

int main(void)
{
    char greeting1[50] = "Hello, and how are you today!";
    char greeting2[50] = "Hello, and"" how are" " you"
    " today!";

    puts(greeting1);
    puts(greeting2);

    return 0;
}