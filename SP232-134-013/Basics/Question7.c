#include <stdio.h>
int main()
{
    char Sentence[100]; // Here we have character array with a size of 100.It can only store sentence with 100 character

    // Sentence Input
    printf("Enter a sentence : ");
    gets(Sentence);

    // Sentence Output
    puts(Sentence);

    return 0;
}