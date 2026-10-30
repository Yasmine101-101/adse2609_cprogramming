/*This program accepts the radius of a circle from the user, calculates and displays
it's area and circumfrence, using a built in function*/

//pre-processor
#include <stdio.h>
#include <math.h>
#define MYPI 3.141593 //Define as a constant

int main()
{
        //Varibales to be usedd in the program
    float radius , area , circumfrence;

    //prompt the user for the circle's radius
    printf("Please enter the radius of the circle in cm.\n");
    scanf("%f", &radius);

    //calculates the area and th circumfrence
    area = MYPI * pow(radius,2);
    circumfrence = MYPI *(radius *2);


    //Dispay the circles dimension
    printf("\nCircle's Dimensions");
    printf("\n-----------------------------");
    printf("\n%-13s %6.2fcm.","Radius", radius);
    printf("\n%-13s %6.2fcm�.","Areas", area);
    printf("\n%-13s %6.2fcm.","Cirumfrence", circumfrence);
    printf("\n-----------------------------");

    return 0;

}
