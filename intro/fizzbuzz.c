// made fizzbuzz in C
#include <stdio.h>
int main()
{
    int x = 20;
    while (x > 0)
    {
        if (x % 3 == 0 && x % 5 == 0)
        {
            printf("FizzBuzz\n");
            x--;
        }
        else if (x % 3 == 0)
        {
            printf("Fizz\n");
            x--;
        }
        else if (x % 5 == 0)
        {
            printf("Buzz\n");
            x--;
        }
        else
        {
            printf("%d\n", x);
            x--;
        }
    }

    return 0;
}