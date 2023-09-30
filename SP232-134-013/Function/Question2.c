#include <stdio.h>
#include <math.h>

// Function declaration
int cubeFunc(int input);

int main()
{
    // Variable declaration and input
    int number, numberCube;
    printf("Enter a number : ");
    scanf("%d", &number);

    // Function call
    numberCube = cubeFunc(number);

    // Display the cube of the number
    printf("The cube of the number is : %d ", numberCube);

    return 0;
}

// Function definition
int cubeFunc(int input)
{
    return pow(input, 3);
}