#include <stdio.h>

void main()
{
    /* 1.4 Symbolic Constants* (define) */
    /* the quantities LOWER, UPPER, and STEP are symbolic constants so they don't appear in declarations */
    #define LOWER   0        /* lower limit of table */
    #define UPPER   300      /* upper limit */
    #define STEP    20       /* step size */

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}