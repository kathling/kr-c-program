#include <stdio.h>
#include <ctype.h>

void main()
{
    int c = 'D';
    printf("%d\n", islower(c));
}


int lower (int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    return c;
}