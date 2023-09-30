#include <stdio.h>
int main()
{
    // declaration and input
    char alphabet;
    printf("Enter an Alphabet : ");
    scanf("%c", &alphabet);

    // Conditional Statements to to check uppercase or lowercase alphabets
    if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U' ||
        alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("This is a vowel.");
    }
    else
    {
        printf("This is a consonant.");
    }

    return 0;
}