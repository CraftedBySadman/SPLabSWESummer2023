#include <stdio.h>
int main()
{
    // Variable Declaration
    int input;

    // Taking User input
    printf("Enter a number : ");
    scanf("%d", &input);

    // Sum of digits
    int sum;
    for (sum = 0; input != 0; input /= 10)
    {
        int temp = input % 10;
        sum = sum + temp;
    }

    // Display the sum of digit
    printf("The sum of digits is : %d", sum);

    return 0;
}