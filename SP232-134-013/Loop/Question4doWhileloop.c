#include <stdio.h>
int main()
{
    // Declaration and input
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // Initialization
    int i = 1;

    // Do While loop
    do
    {
        printf("%d * %d = %d\n", n, i, n * i);
        // Updation
        i++;
    } while (i <= 10);
    
    return 0;
}