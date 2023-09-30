#include <stdio.h>
int main()
{
    // Variable Declaration & Input
    int input1, input2, input3;
    printf("Enter the First Number : ");
    scanf("%d", &input1);
    printf("Enter the Second Number : ");
    scanf("%d", &input2);
    printf("Enter the Third Number : ");
    scanf("%d", &input3);

    // Finding the largest number using conditional statements
    if (input1 > input2)
    {
        // Nested if statement
        if (input1 > input3)
        {
            printf("%d is the largest number.\n", input1);
        }
    }
    else
    {

        if (input2 > input3)
        {
            printf("%d is the largest number.\n", input2);
        }

        else
        {
            printf("%d is the largest number.\n", input3);
        }
    }

    return 0;
}
