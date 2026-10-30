/**this program demonstartes"if selection construct . it accept a letter of the
 alphabet from the user and checks if it's a vowel */

 #include <stdio.h>
 #include <ctype.h> //include definiation for thr "tolower() function"

int main()
{
    //character array to hold the user's name
    char userLetter;

    //prompt the user for a letter of the alphabet 
    printf("Please enter a letter of the alphabet and i'll tell you whether it's a vowel:\n ");
    scanf("%c", &userLetter);

    //conver the input to lowercase
    userLetter = tolower(userLetter);

    //check if the letter is a vowel
    if (userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u')
    printf("The letter %c is a vowel.\n", userLetter);
    
    return 0;

}