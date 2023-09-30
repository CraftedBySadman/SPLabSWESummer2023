#include <stdio.h>
int main()
{
    printf("The Alphabets from a to z are : \n");
    // Declaration and initialization of iteration
    char i = 'a';

    // While loop
    while (i <= 'z')
    {
        // Display alphabets
        printf("%c\n", i);
        // Updation
        i++;
    }
    return 0;
}