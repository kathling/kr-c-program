/* 1.6 Arrays */
#include <stdio.h>

/* counts digits, white space, others */
void mainProgram() 
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) 
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        int d;
        d = c - '0';
        printf("d = %d\n", d);

        if (c >= '0' && c <= '9') 
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}

/* Exercise 1-13: Write a program to print a histogram of the lengths of words in its input (horizontal). */
void histogramLength()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar('*');
    }
}

/* Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input */
void histogramFrequencies()
{
    #define TOTAL_CHARS 128
    
    int nchar[TOTAL_CHARS];
    int i, j, c;

    for (i = 0; i < TOTAL_CHARS; ++i) 
        nchar[i] = 0;
    
    while ((c = getchar()) != EOF) {
        ++nchar[c];
    }

    for (i = 0; i < TOTAL_CHARS; ++i) {
        for (j = 0; j < nchar[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
}

void main()
{
    // mainProgram();
    // histogramLength();
    histogramFrequencies();
}