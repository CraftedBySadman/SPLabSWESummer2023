#include <stdio.h>

int main()
{
    // Variable declaration & input
    int Number;
    printf("Enter a Number : ");
    scanf("%d", &Number);

    // Temporary variable to preserve the input
    int OriginalNumber = Number;

    printf("Original Number : %d\n", Number);

    // Pre Increment
    printf("Pre Incremented Number : %d\n", ++Number);

    // Post Increment
    Number = OriginalNumber;
    printf("Post Incremented Number : %d\n", Number++);

    // Pre Decrement
    Number = OriginalNumber;
    printf("Pre Decremented Number : %d\n", --Number);

    // Post Decrement
    Number = OriginalNumber;
    printf("Post Decremented Number : %d\n", Number--);

    return 0;
}
