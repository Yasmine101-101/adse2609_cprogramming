
/* This program accepts a student's exam score
   and determines whether they have passed or failed.
   The pass mark is 55%. */

#include <stdio.h>

int main()
{
    // Variable to store the exam score
    float score;

    // Prompt the user to enter their score
    printf("Please enter your exam score between 0 and 100:\n");
    scanf("%f", &score);

    // Check whether the score is valid
    if (score < 0 || score > 100)
    {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    }
    // Check whether the student has passed
    else if (score >= 55)
    {
        printf("Congratulations! You have passed.\n");
    }
    // If neither condition is true the student has failed
    else
    {
        printf("Sorry, you have failed.\n");
    }

    return 0;
}
