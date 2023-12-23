#include <stdio.h>
int add_them(int x, int y)
{
    int result;
    result = x + y;
    return result;
}
int main()
{
    int sum;
    sum = add_them(17, 23);
    printf("I added two numbers, their sum is: %d\n", sum);
    return 0;
}