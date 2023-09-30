#include <stdio.h>
int main()
{

    // Variable Declaration
    int asciivalue;

    // Input ASCII value
    printf("Enter the ASCII value : ");
    scanf("%d", &asciivalue);

    // Type Casting
    char Character = (char)asciivalue;

    // Display Character
    printf("The Character is : %c", Character);

    return 0;
}