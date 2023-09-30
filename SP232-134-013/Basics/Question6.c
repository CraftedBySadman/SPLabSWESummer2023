#include <stdio.h>
int main()
{

    // variable declaration
    int hours;
    int minutes;

    // taking hours and minutes as input
    printf("Enter Hours : ");
    scanf("%d", &hours);
    printf("Enter Minutes : ");
    scanf("%d", &minutes);

    // Display total number of minutes
    printf("The total number of Minutes is : %d", hours * 60 + minutes);

    return 0;
}