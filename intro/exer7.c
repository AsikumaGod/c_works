// A program to calculate the hypotenuse of a right angled triangle
#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    double b;
    double c;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    c = sqrt(a * a + b * b);
    printf("The hypotenuse of the triangle is: %lf\n", c);

    return 0;
}