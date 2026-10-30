
/* Program: student_grade */

#include <stdio.h>

int main()
{
    int mark;

    printf("Enter the student's mark (0-100): ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
    {
        printf("Invalid mark. Enter a mark between 0 and 100.\n");
    }
    else if (mark >= 70)
    {
        printf("Result: Distinction\n");
    }
    else if (mark >= 60)
    {
        printf("Result: Credit\n");
    }
    else if (mark >= 50)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
