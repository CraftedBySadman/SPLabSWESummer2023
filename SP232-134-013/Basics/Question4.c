#include <stdio.h>
int main()
{

    // Variable Declaration
    float firstNumber;
    float secondNumber;

    // Input Operation
    printf("Enter the First Number : ");
    scanf("%f", &firstNumber);
    printf("Enter the Second Number : ");
    scanf("%f", &secondNumber);

    // Perform Arithmetic Operations
    printf("The Sum is : %.2f\n", firstNumber + secondNumber);
    printf("The Difference is : %.2f\n", firstNumber - secondNumber);
    printf("The Product is : %.2f\n", firstNumber * secondNumber);
    printf("The Quotient is : %.3f\n", firstNumber / secondNumber);

    return 0;
}