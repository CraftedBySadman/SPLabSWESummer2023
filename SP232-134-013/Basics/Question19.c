#include <stdio.h>
int main()
{
    // Variable Declaration
    int days, months, years, input, originalInput;

    // Input Operation
    printf("Enter Days : ");
    scanf("%d", &input);
    originalInput = input;

    // Convert to years, weeks and days
    years = input / 365;
    input = input % 365;
    months = input / 30;
    input = input % 30;
    days = input;

    // Display Output
    printf("%d Days is equivalent to %d Years %d Months %d Days.", originalInput, years, months, days);

    return 0;
}