#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, reminder;

    // Input the dividend and divisor
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Calculate quotient and reminder
    if (divisor != 0)
    {
        for (quotient = 0; dividend >= divisor; quotient++)
        {
            dividend = dividend - divisor;
        }
        reminder = dividend;

        // Display Quotient and Reminder
        printf("Quotient is %d and Reminder is %d", quotient, reminder);
    }
    else
    {
        printf("Undefined");
    }
    return 0;
}
