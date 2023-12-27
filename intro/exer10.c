// A simple calculator
#include <stdio.h>
int main()
{
    int operands;
    double num1;
    double num2;
    double result;
    printf("Welcome to my calculator\n=============================\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);
    printf("\nSelect Operand:\n1.Add(+)\n2.Minus(-)\n3.Multiply(*)\n4.Divide(/)\n:");
    scanf("%i", &operands);
    switch (operands)
    {
    case 1:
        result = num1 + num2;
        printf("The result is %.1lf\n", result);
        break;
    case 2:
        result = num1 - num2;
        printf("The result is %.1lf\n", result);
        break;
    case 3:
        result = num1 * num2;
        printf("The result is %.1lf\n", result);
        break;
    case 4:
        result = num1 / num2;
        printf("The result is %.1lf\n", result);
        break;
    default:
        printf("The number you entered doesn't match an operand!\n");
    }
    return 0;
}