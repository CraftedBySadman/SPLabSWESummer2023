#include <stdio.h>
int main()
{
    // Declaration and input
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // Initialization
    int i = 1;

    // While loop
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        // Updation
        i++;
    }
    return 0;
}