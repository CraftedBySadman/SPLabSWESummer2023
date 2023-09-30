#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the number : ");
    scanf(" %d", &range);

    int sum = 0;

    // Calculate sum of odd numbers using for loop
    for (int i = 1; i <= range; i += 2)
    {
        sum = sum + i;
    }
    // Display output
    printf("The sum of odd numbers from 1 to %d is : %d", range, sum);
    return 0;
}