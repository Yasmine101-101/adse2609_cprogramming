/*this program demonstrates the use of a for loop 
to print the first ten integers*/

//pre-processor
#include <stdio.h>
int main()
{
    //declare variable and assign

    int n = 1;

    //use the while loop to display the first ten integers
    do
    {
        printf("\n Current value of n: %2d", n);
        n++;
    } while(n <= 10);

    return 0;
}