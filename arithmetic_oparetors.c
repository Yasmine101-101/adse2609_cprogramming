#include <stdio.h>

int main()
{

    //variable to be used in the program
    int firstNum = 8, secondNum = 5;

    //Display th values of the above varibles
    printf("Values of the 'firstNum' and 'secondNum' are %d and %d repectively",firstNum, secondNum);

    //Perform the various arithemtic operation and display theor results
    printf("\n%15s: %d + %d = %2d", "Addition", firstNum, secondNum, firstNum + secondNum  );
    printf("\n%15s: %d x %d = %2d" , "Multiplication",firstNum, secondNum, firstNum * secondNum);
    printf("\n%15s: %d - %d = %2d","Subtraction", firstNum, secondNum, firstNum - secondNum);
    printf("\n%15s: %d / %d = %2d","Division", firstNum, secondNum, firstNum / secondNum);
    printf("\n%15s: %d %% %d = %2d","Remainder", firstNum, secondNum, firstNum % secondNum);

    return 0;
}
