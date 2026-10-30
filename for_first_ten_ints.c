/*this program demonstrates the use of a for loop 
to print the first ten integers*/

//pre-processor
#include <stdio.h>
int main()
{
    //declare variable
    int n;

    //use the for loop to diplay the first ten integers
    for(n = 1; n <= 10; n++)
    
        printf("\n Current value of n: %2d", n);
    

    return 0;
}