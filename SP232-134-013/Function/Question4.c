#include <stdio.h>
// Function declaration
void swap(int input1, int input2);

int main()
{
    // Variable declaration and input
    int firstNumber, secondNumber;
    printf("Enter the first number : ");
    scanf("%d", &firstNumber);
    printf("Enter the second number : ");
    scanf("%d", &secondNumber);

    // Function Call
    swap(firstNumber, secondNumber);

    return 0;
}
// Function definition
void swap(int input1, int input2)
{
    // swap
    int temporary = input1;
    input1 = input2;
    input2 = temporary;

    // Display after swaping
    printf("After swaping the first number is %d second number is %d", input1, input2);
}