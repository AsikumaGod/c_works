#include <stdio.h>
int mul_tiply(int x, int y)
{
    int result;
    result = x * y;
    return result;
}
int main()
{
    int multiply = mul_tiply(100, 7);
    printf("I multiplied two numbers, the result is: %d\n", multiply);
    return 0;
}