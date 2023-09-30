#include <stdio.h>
int main()
{
    // Declaration of iteration
    int i;
    printf("The ASCII value of all Characters are : ");
    // For loop
    for (i = 0; i < 128; i++)
    {
        printf(" The ASCII value of '%c' is '%d'\n", i, i);
    }
    return 0;
}