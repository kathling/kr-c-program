#include <stdio.h>

void main() 
{
    /* 1.3 The For Statement */
    /* print Fahrenheit-Celsius table*/
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) 
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    
    /* Exercise 1-5: Modify the temperature conversion program to print the table in reverse order */
    // int fahr;
    // for (fahr = 300; fahr >= 0; fahr -= 20) 
    //     printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}