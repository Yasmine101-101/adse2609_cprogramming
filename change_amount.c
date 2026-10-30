#include <stdio.h>

int main()
{

    int amount, sugar, milk, change;
    printf("Enter amount of money(Kes): ");
    scanf("%d", &amount);

    printf("Enter amount of sugar(KES): ");
    scanf("%d", &sugar);

    printf("Enter amount of milk(KES): ");
    scanf("%d", &milk);

    change = amount - (sugar + milk);

    printf("Change : KES . %d\n", change);

    return 0;
}
