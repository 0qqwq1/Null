#include <stdio.h>
#define SIZE 5
int main(void)
{
    int input[SIZE] = { 1, 2, 3, 4, 5 };
    int temp;

    for (int i = 0; i < SIZE - 1; i++)
        for (int j = i + 1; j < SIZE; j++)
    {
        if (input[i] < input[j])
        {
            temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    }

    for(int k = 0; k < SIZE; k++)
        printf("%d ", input[k]);

    return 0;
}
