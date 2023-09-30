#include <stdio.h>
int main()
{
    // Variable declaration and input
    int number;
    printf("Enter a Number : ");
    scanf("%d", &number);

    // Conditional statement to to check if number is positive, negative or zero.
    if (number == 0)
    {
        printf("This is 0.");
    }
    else if (number >= 1)
    {
        printf("This is a Positive Number.");
    }
    else if (number <= 0)
    {
        printf("This is a Negative Number.");
    }
    return 0;
}