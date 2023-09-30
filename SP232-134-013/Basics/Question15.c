#include <stdio.h>
#include <ctype.h>
int main()
{

    // Variable Declaration
    char input;

    // Input Capital Letter
    printf("Enter a Capital Letter : ");
    scanf("%c", &input);

    // Display small letter
    printf("The small letter is : %c", tolower(input));

    return 0;
}