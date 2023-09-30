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

    // Calculate natural numbers using do while loop
    do
    {
        printf("%d\n", i);
        // Updation
        i--;
    } while (i >= 1);

    return 0;
}