#include <stdio.h>
int main()
{

    // Variable Declaration
    int length;
    int width;

    // Input operation
    printf("Enter the value of Length : ");
    scanf("%d", &length);
    printf("Enter the value of Width : ");
    scanf("%d", &width);

    // Display area of rectangle
    printf("The area of Rectangle  is : %d", length * width);

    return 0;
}