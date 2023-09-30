#include <stdio.h>

// Function declaration
float sum(float input1, float input2);
float difference(float input1, float input2);
float product(float input1, float input2);
float quotient(float input1, float input2);

int main()
{ // Variable Declaration
    float firstNumber;
    float secondNumber;

    // Input Operation
    printf("Enter the First Number : ");
    scanf("%f", &firstNumber);
    printf("Enter the Second Number : ");
    scanf("%f", &secondNumber);

    // Display Output
    printf("The Sum is : %.2f\n", sum(firstNumber, secondNumber));
    printf("The Difference is : %.2f\n", difference(firstNumber, secondNumber));
    printf("The Product is : %.2f\n", product(firstNumber, secondNumber));
    printf("The Quotient is : %.3f\n", quotient(firstNumber, secondNumber));
}

// Function definition
float sum(float input1, float input2)
{
    return input1 + input2;
}

float difference(float input1, float input2)
{
    return input1 - input2;
}

float product(float input1, float input2)
{
    return input1 * input2;
}

float quotient(float input1, float input2)
{
    return input1 / input2;
}