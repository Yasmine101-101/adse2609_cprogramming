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

    //use the switch case to determine the selected item
    switch(choice)
    {
        case 1:
            printf("\nYou have selected Chips - Kes 150 \n your order will be ready in 5 minutes");
            break;
        case 2:
            printf("\nYou have selected Burger - Kes 250 \n your order will be ready in 10 minutes");
            break;
        case 3:
            printf("\nYou have selected Pizza - Kes 500 \n your order will be ready in 15 minutes");
            break;
        case 4:
            printf("\nYou have selected Soda - Kes 100 \n your order will be ready in 5 minutes");
            break;
        case 5:
            printf("\nYou have selected Rice - Kes 200 \n your order will be ready in 10 minutes");
            break;
        default: //handles choices equal to 0 or greater than 5
            printf("\nInvalid choice. Please select a valid option (1-5).");
        break;
    }

    return 0;
}