#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("That was Excellent\n");
        break;
    case 'B':
        printf("That was Nice\n");
        break;
    case 'C':
        printf("That was good\n");
        break;
    case 'D':
        printf("Hmm, not quite good\n");
        break;
    case 'E':
        printf("You need to level up your game\n");
        break;
    case 'F':
        printf("YOU FAILED!!!!!!!!\n");
    default:
        printf("You entered is not a valid grade\n");
    }
    return 0;
}