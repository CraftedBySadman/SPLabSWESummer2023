#include <stdio.h>
int main()
{
    printf("The Alphabets from a to z are : \n");
    // Declaration and initialization of iteration
    char i = 'a';

    // do while loop
    do
    {
        // Display alphabets
        printf("%c\n", i);
        // Updation
        i++;
    } while (i <= 'z');
    return 0;
}