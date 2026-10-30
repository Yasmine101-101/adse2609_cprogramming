/*This program accepts the radius of a circle from the user, calculates and displays
it's area and circumfrence*/

#include <stdio.h>

#define MYPI 3.141593  //Define as a constant

int main()
{
    float radius, area, circumference;

    printf("Please enter the radius of the circle in cm:\n");
    scanf("%f", &radius);

    area = MYPI * radius * radius;
    circumference = 2 * MYPI * radius;

    printf("\nCircle's Dimensions");
    printf("\n-----------------------------");
    printf("\n%-13s %6.2fcm.","Radius", radius);
    printf("\n%-13s %6.2fcm�.","Areas", area);
    printf("\n%-13s %6.2fcm.","Cirumfrence", circumfrence);
    printf("\n-----------------------------");

    return 0;
}
