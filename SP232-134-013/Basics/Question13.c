#include <stdio.h>
int main()
{
    // Variable declaration
    float Celsius;

    // Input celsius value
    printf("Enter the Celsius Value : ");
    scanf("%f", &Celsius);

    // Display fahrenheit value
    printf("The Fahrenheit value is : %.2f", 9 * Celsius / 5 + 32);

    return 0;
}