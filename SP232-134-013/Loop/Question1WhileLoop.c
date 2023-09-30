#include <stdio.h>
int main()
{
    // variable declaration and input
    int range;
    printf("Enter the range : ");
    scanf(" %d", &range);

    // Display Output
    printf("The Even numbers from 1 to %d are :\n", range);

    // Declaration and initialization of iteration
    int i = 2;

    // While loop with condition
    while (i <= range)
    {
        printf("%d\n", i);

        // Updation
        i += 2;
    }
    return 0;
}