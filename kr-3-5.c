/* 3.5 Loops - atoi, shellsort, reverse */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int atoi(char s[]);
void shellsort(int v[], int n);
void reverse(char s[]);

int main()
{
    // testing shellsort function
    printf("=================== SHELLSORT START ====================\n");
    int list[] = {3, 5, 3, 4, 2, 5, 4, 8, 0, 1, 7, 6};
    int nfind = 12;

    printf("unsorted array\n");
    for (int i = 0; i < 12; ++i)
    {
        printf("i: %d\n", list[i]);
    }

    shellsort(list, nfind);

    printf("===================== SHELLSORT END ====================\n");
    printf("sorted array\n");
    for (int i = 0; i < 12; ++i)
    {
        printf("i: %d\n", list[i]);
    }

    printf("===================== REVERSE START ===================\n");
    // testing reverse function
    char tstring[] = {'h', 'e', 'l', 'l', 'o'};

    printf("string: %s\n", tstring);

    reverse(tstring);

    printf("reversed string: %s\n", tstring);

    printf("====================== REVERSE END ====================\n");
}

/* atoi: convert s to integer; version 2 */
int atoi(char s[])
{
    int i, n, sign;

    for (i = 0; isspace(s[i]); ++i)
    {
        ; /* skip white space*/
    }

    sign = (s[i] == '-') ? -1 : 1;

    /* skip sign*/
    if (s[i] == '+' || s[i] == '-')
    {
        ++i;
    }

    for (n = 0; isdigit(s[i]); ++i)
    {
        n = 10 * n + (s[i] - '0');
    }

    return sign * n;
}

/* shellsort: sort v[0] ... v[n - 1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; ++i)
        {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
}

/* reverse: reverse string s in place */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; ++i, --j)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
