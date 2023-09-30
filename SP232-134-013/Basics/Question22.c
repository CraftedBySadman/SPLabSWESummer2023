#include <stdio.h>
int main()
{
    // Variable Declaration
    int input;

    // Taking User input
    printf("Enter a number : ");
    scanf("%d", &input);

    // Reverse the Number
    int reverse;
    for (reverse = 0; input != 0; input = input / 10)
    {
        int temp = input % 10;
        reverse = reverse * 10 + temp;
    }

    // Display the reversed number
    printf("The reversed number is : %d", reverse);

    return 0;
}