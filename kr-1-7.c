/* 1.7 Functions */
#include <stdio.h>

int power(int m, int n);
int tempConversion();
float fahrToCelsius(int fahr);

/* test power function */
main()
{
    // int i;

    // for (i = 0; i < 10; ++i)
    //     printf("%d %d %d\n", i, power(2, i), power(-3, i));
    // return 0;

    tempConversion();
}

/* power: raise base to n-th power; n >=0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

int tempConversion()
{
    #define LOWER   0
    #define UPPER   300
    #define STEP    20

    float fahr;
    
    fahr = LOWER;
    for (fahr = 0; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f %6.1f\n", fahr, fahrToCelsius(fahr));
}

float fahrToCelsius(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}