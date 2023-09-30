#include <stdio.h>
int main()
{

    // Variable Declaration
    char input;

    // Input small letter
    printf("Enter a small letter : ");
    scanf("%c", &input);

    // Conversion
    char Capital = input - 32;

    // Display Capital letter
    printf("The Capital Letter is : %c", Capital);

    return 0;
}