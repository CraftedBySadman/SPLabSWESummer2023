#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the number : ");
    scanf(" %d", &range);

    // Display output
    printf("The natural numbers from 1 to %d in reverse order are : \n", range);

    // Initialization
    int i = range;

    // Calculate natural numbers using while loop
    while (i >= 1)
    {
        printf("%d\n", i);
        // Updation
        i--;
    }

    return 0;
}