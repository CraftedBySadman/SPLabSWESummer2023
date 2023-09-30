#include <stdio.h>
int main()
{
    // Variable Declaration
    int input;

    // Taking User input
    printf("Enter a number : ");
    scanf("%d", &input);

    // Initialization
    int sum = 0;
    // while loop
    while (input != 0)
    {
        int temp = input % 10;
        sum = sum + temp;
        // Updation
        input /= 10;
    }

    // Display the sum of digits
    printf("The sum of digits is : %d", sum);

    return 0;
}