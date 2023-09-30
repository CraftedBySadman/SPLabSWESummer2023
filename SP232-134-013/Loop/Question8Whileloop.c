#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the number : ");
    scanf(" %d", &range);

    int sum = 0;
    int i = 1;

    // Calculate sum of odd numbers using while loop
    while (i <= range)
    {
        sum = sum + i;
        i += 2;
    }
    // Display output
    printf("The sum of odd numbers from 1 to %d is : %d", range, sum);
    return 0;
}