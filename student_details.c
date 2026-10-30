/* Student Details Program */

#include <stdio.h>
int main()
{
    //Declearing and assigning values to the student's details
    int age = 21;
    char grade = 'A';
    float average_marks = 85.5; 

    //Display the student's details
    printf("\nStudent Details");
    printf("\n--------------------");
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Average Marks: %.2f\n", average_marks);
    printf("\n--------------------");

    return 0;
}