
/* Program: menu_formatting */

#include <stdio.h>

int main()
{
    // Declare quantities
    int chipsQty = 2;
    int burgerQty = 1;
    int juiceQty = 3;

    // Declare unit prices
    float chipsPrice = 150.00;
    float burgerPrice = 350.00;
    float juicePrice = 100.00;

    // Calculate item totals
    float chipsTotal = chipsQty * chipsPrice;
    float burgerTotal = burgerQty * burgerPrice;
    float juiceTotal = juiceQty * juicePrice;

    // Calculate grand total
    float grandTotal = chipsTotal + burgerTotal + juiceTotal;

    // Display the bill
    printf("\n             RESTAURANT BILL\n");
    printf("-------------------------------------------------------------\n");
    printf("%-18s %10s %15s %15s\n",
           "Item", "Quantity", "Unit Price", "Total Price");
    printf("-------------------------------------------------------------\n");

    printf("%-18s %10d %15.2f %15.2f\n",
           "Chips", chipsQty, chipsPrice, chipsTotal);

    printf("%-18s %10d %15.2f %15.2f\n",
           "Beef burger", burgerQty, burgerPrice, burgerTotal);

    printf("%-18s %10d %15.2f %15.2f\n",
           "Fresh juice", juiceQty, juicePrice, juiceTotal);

    printf("-------------------------------------------------------------\n");
    printf("%-45s %15.2f\n", "GRAND TOTAL (KSh):", grandTotal);
    printf("-------------------------------------------------------------\n");

    return 0;
}
