#include <stdio.h>
int main()
{
    // Declaration and initialization of iteration
    int i = 0;
    printf("The ASCII value of all Characters are : ");
    // While  loop
    while (i < 128)
    {
        printf(" The ASCII value of '%c' is '%d'\n", i, i);
        // Updation
        i++;
    }
    return 0;
}