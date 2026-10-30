//this program accepts the base and the height of a right angle triangle
//from the user 

//pre-processor
#include <stdio.h>
#include <math.h>

int main()
{
    //Varibles to be used in the program
    float base, height, area, perimeter;

    //promptthe user for th base
    printf("Please enter the base of the right angle triangle in cm.\n");
    scanf("%f", &base);

    //promt the user for the height
    printf("Please enter the height of the right angle triangle in cm.\n");
    scanf("%f", &height);

    //Declare and calculate the triangle's hypotenuse 
    float hypotenuse = sqrt(pow(base,2) + pow(height,2));


    //calculates the area and the perimeter of the right angle triangle
    area = 0.5 * base * height;
    perimeter = base + height + hypotenuse;

    //Display the triangle's dimensions
    printf("\nTriangle's Dimensions");
    printf("\n-----------------------------");
    printf("\n%-13s %6.2fcm.","Base", base);
    printf("\n%-13s %6.2fcm.","Height", height);
    printf("\n%-13s %6.2fcm.","Hypotenuse", hypotenuse);
    printf("\n%-13s %6.2fcm.","Area", area);
    printf("\n%-13s %6.2fcm.","Perimeter", perimeter);
    printf("\n-----------------------------");

    return 0;
}
