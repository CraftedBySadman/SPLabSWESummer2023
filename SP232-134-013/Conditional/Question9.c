#include <stdio.h>
int main()
{
    // Variable Declaration & Input
    char input;
    printf("Enter a Character : ");
    scanf("%c", &input);

    // Check alphabet, digit or special character using Ternary operator
    (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z') ? printf("This is an Alphabet.")
    : (input >= '0' && input <= '9')                               ? printf("This is a number.")
                                                                   : printf("This is a special character.");

    return 0;
}