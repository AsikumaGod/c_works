// Given the declaration double dbl_num = 123.456;, write a program that prints
//  out the value of dbl_num in both floating-point and scientific notation formats.
#include <stdio.h>
int main()
{
    double dbl_num = 123.456;
    printf("123.456 in float is: %f\n", dbl_num);
    printf("123.456 in scientific notation is: %e\n", dbl_num);
}