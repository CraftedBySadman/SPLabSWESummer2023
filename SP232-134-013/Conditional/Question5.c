#include <stdio.h>
int main()
{
    // Variable Declaration & Input
    char input;
    printf("Enter a Character : ");
    scanf("%c", &input);

    // Check alphabet or not using Ternary operator
    (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z') ? printf("This is an Alphabet.")
                                                                   : printf("This is not an Alphabet.");

    return 0;
}