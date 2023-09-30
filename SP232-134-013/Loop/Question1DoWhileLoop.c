#include <stdio.h>
int main()
{
    // Range declaration and input
    int range;
    printf("Enter the range : ");
    scanf("%d", &range);
    // Display numbers
    printf("The even numbers from 1 to %d are : \n", range);

    // Declaration of iteration and initialization
    int i = 2;

    // Do while loop
    do
    {
        printf("%d\n", i);
        // Updation
        i += 2;
    } while (i <= range);
    return 0;
}