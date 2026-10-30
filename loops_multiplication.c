
/* Program: loops_multiplication */

#include <stdio.h>

int main()
{
    int number;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Error: Please enter a positive integer.\n");
    }
    else
    {
        printf("\nMultiplication table for %d\n", number);
        printf("--------------------------\n");

        for (i = 1; i <= 12; i++)
        {
            printf("%d x %2d = %d\n", number, i, number * i);
        }
    }

    return 0;
}
