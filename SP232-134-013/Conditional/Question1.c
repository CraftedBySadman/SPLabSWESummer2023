#include <stdio.h>
int main()
{
    // Declaration and input
    int input;
    printf("Enter a Number : ");
    scanf("%d", &input);

    // Conditional Statement to check if the input is even, odd, or zero
    if (input == 0)
    {
        printf("The number is 0.");
    }
    else if (input % 2 == 0)
    {
        printf("The number is even.");
    }

    else
    {
        printf("The number is odd.");
    }

    return 0;
}