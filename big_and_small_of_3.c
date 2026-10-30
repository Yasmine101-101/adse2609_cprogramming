/*Write a C program called "big_and_small_of_3", that accepts 
three numbers from the user and displays the largest 
and smallest numbers. Use only comparison and logical (ternary) operators.*/  

/* This program accepts three numbers and displays
   the largest and smallest numbers. */

#include <stdio.h>
int main()
{
    //variables to be used in the program
    float num1, num2, num3, largest, smallest;

    //Prompt the user for the numbers
    printf("Please enter the first number.\n");
    scanf("%f", &num1);

    printf("Please enter the second number.\n");
    scanf("%f", &num2);

    printf("Please enter the third number.\n");
    scanf("%f", &num3);

    //find the largest number using comparison and logical operators
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    //find the smallest number using comparison and logical operators
    smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    //Display the largest and smallest numbers
    printf("\nThe largest number is: %.2f", largest);
    printf("\nThe smallest number is: %.2f", smallest);

    return 0;
    
}
