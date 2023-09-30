#include <stdio.h>
int main()
{
    // Variable Declaration and input
    int input, firstNumber, lastNumber, sum;
    printf("Enter a three digits number : ");
    scanf("%d", &input);

    // Extract first and last number
    firstNumber = input / 100;
    lastNumber = input % 10;

    // sum of the first and last number
    sum = firstNumber + lastNumber;

    // Display Sum
    printf("The Sum of the first and last number is : %d", sum);

    return 0;
}