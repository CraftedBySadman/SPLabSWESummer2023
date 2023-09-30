#include <stdio.h>
int main()
{
    // Variable Declaration
    int days, weeks, years, input, originalInput;

    // Input Operation
    printf("Enter Days : ");
    scanf("%d", &input);
    originalInput = input;

    // Convert to years, weeks and days
    years = input / 365;
    input = input % 365;
    weeks = input / 7;
    input = input % 7;
    days = input;

    // Display Output
    printf("%d Days is equivalent to %d Years %d Weeks %d Days.", originalInput, years, weeks, days);

    return 0;
}