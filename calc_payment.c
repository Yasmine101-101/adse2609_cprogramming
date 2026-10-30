
/* Program: calc_payment */

#include <stdio.h>

int main()
{
    // Declare variables
    float price, totalCost, discount, finalAmount;
    int quantity;

    // Ask the user for the price
    printf("Please enter the price of an item in KSh:\n");
    scanf("%f", &price);

    // Ask the user for the quantity
    printf("Please enter the quantity purchased:\n");
    scanf("%d", &quantity);

    // Calculate the total cost
    totalCost = price * quantity;

    // Calculate the discount
    if (totalCost >= 1000)
    {
        discount = totalCost * 0.10;
    }
    else
    {
        discount = 0;
    }

    // Calculate the final amount payable
    finalAmount = totalCost - discount;

    // Display the results
    printf("\nPAYMENT DETAILS\n");
    printf("-----------------------------\n");
    printf("Total Cost:       KSh %.2f\n", totalCost);
    printf("Discount:         KSh %.2f\n", discount);
    printf("Final Amount:     KSh %.2f\n", finalAmount);
    printf("-----------------------------\n");

    return 0;
}
