#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the number : ");
    scanf(" %d", &range);

    int sum = 0;

    // Calculate sum of even numbers using for loop
    for (int i = 2; i <= range; i += 2)
    {
        sum = sum + i;
    }
    // Display output
    printf("The sum of even numbers from 1 to %d is : %d", range, sum);
    return 0;
}