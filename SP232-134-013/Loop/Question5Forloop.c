#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the number : ");
    scanf(" %d", &range);

    // Display output
    printf("The natural numbers from 1 to %d in reverse order are : \n", range);

    // Calculate natural numbers using for loop
    for (int i = range; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}