/*This */


#include <stdio.h>

int main()
{
    //character array to hold the user's name
    char name[80];

    //prompt the user for their name
    printf("Please enter your name:\n");

    //Read the user's name
    gets(name);

    //Greet the user
    printf("\n Hello \"%s\" from C Programming!", name);

    return 0;
}
