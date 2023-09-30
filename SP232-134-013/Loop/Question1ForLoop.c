#include <stdio.h>
int main()
{

    // Variable declaration and input
    int range;
    printf("Enter the range : ");
    scanf(" %d", &range);

    // Display output
    printf("The even numbers from 1 to %d are : \n", range);

    // Calculate even numbers using for loop
    for (int i = 2; i <= range; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}