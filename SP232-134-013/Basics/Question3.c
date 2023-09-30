#include <stdio.h>

// Defined Symbolic Constants
#define PI 3.1416
#define BirthYear 2003

int main()
{

    // Using Symbolic Constants
    float radius = 12;
    float Area = PI * radius * radius;
    printf("The Area Of Circle is : %.3f\n", Area);
    printf("My Birth Year is : %d\n", BirthYear);

    // Define Constants
    const int NumberOfStudents = 44;

    // Using Constants
    printf("There Are %d students in 5th batch", NumberOfStudents);

    return 0;
}