#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the number : ");
    scanf(" %d", &range);

    int sum = 0;
    int i = 2;

    // Calculate sum of even numbers using for loop
    do
    {
        sum = sum + i;
        i += 2;
    } while (i <= range);
    // Display output
    printf("The sum of even numbers from 1 to %d is : %d", range, sum);
    return 0;
}