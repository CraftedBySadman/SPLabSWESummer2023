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

    // Conditional operator to find the largest number among three numbers
    (input1 > input2 && input1 > input3)   ? printf("%d is the largest number.", input1)
    : (input2 > input1 && input2 > input3) ? printf("%d is the largest number.", input2)
                                           : printf("%d is the largest number.", input3);

    return 0;
}