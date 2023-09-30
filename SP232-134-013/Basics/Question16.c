#include <stdio.h>
#include <ctype.h>
int main()
{

    // Variable Declaration
    char input;

    // Input small letter
    printf("Enter a small letter : ");
    scanf("%c", &input);

    // Display Capital letter
    printf("The Capital Letter is : %c", toupper(input));

    return 0;
}