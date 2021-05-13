#include <stdio.h>

void main()
{
    /* 1.2 Variables and Arithmetic Expressions */
    /* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

    /* old ver. (not accurate due to integer arithmetic */
    // int fahr, celsius;
    // int lower, upper, step;

    // lower = 0;      /* lower limit of temperature table */
    // upper = 300;    /* upper limit */
    // step = 20;      /* step size */

    // fahr = lower;
    // while (fahr <= upper) {
    //     celsius = 5 * (fahr- 32) / 9;
    //     // printf("%d\t%d\n", fahr, celsius);
    //     printf("%3d\t%6d\n", fahr, celsius); /* added fields so numbers are right justified*/
    //     fahr = fahr + step;
    // }

    /* new version (uses floating-point arithmetic for a more accurate conversion*/
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;

    printf("fahr celsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr- 32.0);
        printf("%3.0f%6.1f\n", fahr, celsius); 
        fahr = fahr + step;
    }

    /* Exercise 1-4: print the corresponding Celsius to Fahrenheit Table */
    // float fahr, celsius;
    // int lower, upper, step;

    // lower = 0;      /* lower limit of temperature table */
    // upper = 300;    /* upper limit */
    // step = 20;      /* step size */

    // celsius = lower;

    // printf("celsius fahr\n");
    // while (celsius <= upper) {
    //     fahr = (9.0 / 5.0) * celsius + 32.0;
    //     printf("%3.0f%8.0f\n", celsius, fahr); 
    //     celsius = celsius + step;
    // }

}