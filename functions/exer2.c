#include <stdio.h>
// void functions do not retturn values
void birthday(char name[], int age)
{
    printf("\nHey %s, you are %d years old\n", name, age);
}
int main()
{
    char name[] = "Kofi";
    int age = 45;
    birthday(name, age);
    return 0;
}