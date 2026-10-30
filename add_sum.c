//C program to display "Hello World" on the console

//pre processor

#include <stdio.h>


//main function provided the entery point to the program\application

int main()
{

    int num1, num2, sum;
    //prompt the user for the varible to be added

    printf("Please enter the first number to added:\n");

    scanf("%d",&num1);

    printf("Please enter the second number to added:\n");

    scanf("%d",&num2);
    //Added the 2 numbers and assign the result to the sum

    sum = num1 + num2;

    printf("\n%d + %d = %d \n", num1 , num2, sum);

    return 0;

}
