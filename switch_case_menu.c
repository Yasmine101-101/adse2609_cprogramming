#include <stdio.h>
int main()
{
    //Variables to used in the program
    int choice; //holds the customer's choice

    //Display the menu to the user
    printf("\n------------------------------------");
    printf("\nWELCOME TO THE ADSE2605 RESTAURANT");
    printf("\n------------------------------------");
    printf("\n1.Chips            -Kes 150");
    printf("\n2.Burger           -Kes 250");
    printf("\n3.Pizza            -Kes 500");
    printf("\n4.Soda             -Kes 100");
    printf("\n5.Rice             -Kes 200");
    
    printf("\n------------------------------------");

    //Prompt the user to enter their choice
    printf("\nPlease enter your choice (1-5): ");
    scanf("%d", &choice);

    return 0;
}