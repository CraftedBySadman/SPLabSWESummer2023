// This is a C program which can perform input & output operations of all basic data types.
#include <stdio.h>
int main()
{
    // Variable Declaration
    int IntegerNumber;
    float FractionalNumber;
    double DoubleTypeNumber;
    char character;

    // Input and output operation of Integer data type
    printf("Enter an Integer Number : ");
    scanf("%d", &IntegerNumber);
    printf("The Integer Number You've Entered Is : %d\n", IntegerNumber);

    // Input and output operation of Float data type
    printf("Enter a Fractional Number : ");
    scanf("%f", &FractionalNumber);
    printf("The Fractional Number You've Entered Is : %f\n", FractionalNumber);

    // Input and output operation of Character data type
    printf("Enter Character : ");
    scanf(" %c", &character);
    printf("The Character You've Entered Is : %c\n", character);

    // Input and output operation of Double data type
    printf("Enter a Fractional Number : ");
    scanf("%lf", &DoubleTypeNumber);
    printf("The Fractional Number You've Entered Is : %lf\n", DoubleTypeNumber);
    return 0;
}
