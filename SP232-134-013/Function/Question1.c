#include <stdio.h>

// function declaration
void evenorodd(int input);

int main()
{

    // variable declaration and input
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    // function call
    evenorodd(number);

    return 0;
}

// function definition
void evenorodd(int input)
{
    if (input == 0)
    {
        printf("The number is 0.");
    }
    else if (input % 2 == 0)
    {
        printf("The number is even.");
    }

    else
    {
        printf("The number is odd.");
    }
}