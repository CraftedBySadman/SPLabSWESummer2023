#include <stdio.h>
int main()
{

    // Variable Declaration
    char input;

    // Input Capital Letter
    printf("Enter a Capital Letter : ");
    scanf("%c", &input);

    // Conversion
    char smallLetter = input + 32;

    // Display small letter
    printf("The small letter is : %c", smallLetter);

    return 0;
}