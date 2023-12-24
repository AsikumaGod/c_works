#include <stdio.h>
#include <ctype.h>
int main()
{
    char unit;
    float temp;
    printf("\nIs the temperature in (F) or (C)");
    scanf("%c", &unit);
    if (unit == 'C')
    {
        printf("\nEnter the temperature in Celcius: ");
        scanf("%f", temp);
        temp = (temp * 9 / 5) + 32;
        print("\nThe temperature in Fahrenheit is %.1f\n", &temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celcius is: %.1f\n", temp);
    }
    else
    {
        printf("\nEnter a valid unit!");
    }

    return 0;
}