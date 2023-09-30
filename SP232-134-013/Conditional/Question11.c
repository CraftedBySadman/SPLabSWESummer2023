#include <stdio.h>
int main()
{
    // Declaration and input
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    // Conditional statement to check whether they are eligible for casting the vote or not
    if (age >= 18)
    {
        printf("Eligible for casting the vote.");
    }
    else
    {
        printf("Not Eligible for casting the vote.");
    }

    return 0;
}