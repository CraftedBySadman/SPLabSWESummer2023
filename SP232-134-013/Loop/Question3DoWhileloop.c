#include <stdio.h>
int main()
{
    // Declaration and initialization of iteration
    int i = 0;
    printf("The ASCII value of all Characters are : ");
    // Do While  loop
    do
    {
        printf(" The ASCII value of '%c' is '%d'\n", i, i);
        // Updation
        i++;
    } while (i < 128);
    return 0;
}