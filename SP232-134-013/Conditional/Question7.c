#include <stdio.h>
int main()
{
    // declaration and input
    char alphabet;
    printf("Enter an Alphabet : ");
    scanf("%c", &alphabet);

    // Conditional Statements to to check uppercase or lowercase alphabets
    if (alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("This is a Uppercase Alphabet.");
    }
    else if (alphabet >= 'a' && alphabet <= 'z')
    {
        printf("This is a lowercase alphabet.");
    }

    return 0;
}