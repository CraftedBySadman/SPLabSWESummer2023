#include <stdio.h>
int main()
{
    // Declaration and input
    int input1, input2;
    printf("Enter First Number : ");
    scanf("%d", &input1);
    printf("Enter Second Number : ");
    scanf("%d", &input2);

    // Conditional statement to check whether they are equal or not
    if (input1 == input2)
    {
        printf("They are equal.");
    }
    else
    {
        printf("They are not equal.");
    }

    return 0;
}