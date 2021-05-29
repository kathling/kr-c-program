#include <stdio.h>
#include <limits.h>
#include <float.h>

int strlen(char s[]);

void main()
{
    /* enum (enumeration constant) */
    enum boolean
    {
        NO,
        YES
    };

    enum months
    {
        JAN = 1,
        FEB,
        MAR = 100,
        APR,
        MAY,
        JUN
    }                  ;

    printf("%d\n", APR); 

    int a;
    printf("%d", a);
}

/* strlen: return length of s */
int strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}