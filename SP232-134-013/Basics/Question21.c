#include <stdio.h>
int main()
{
    // Variable Declaration and input
    int input, firstNumber, lastNumber;
    printf("Enter a three digits number : ");
    scanf("%d", &input);

    // Extract first and last number
    firstNumber = input / 100;
    lastNumber = input % 10;

    // Square of first and last number
    int squareFirst = firstNumber * firstNumber;
    int squarelast = lastNumber * lastNumber;

    // Display Square
    printf("Square of %d is %d and Square of %d is %d", firstNumber, squareFirst, lastNumber, squarelast);

    return 0;
}