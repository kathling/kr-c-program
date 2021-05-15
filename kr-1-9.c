/* 1.9 Character Arrays */
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline1(char line[], int maxline);
void copy(char to[], char from[]);
int printlongestline();
int revprintlongestline();
int printlinesover80();

main()
{
    // printlongestline();
    // revprintlongestline();
    printlinesover80();
}

/* print longest input line */
int printlongestline()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getline1(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int getline1(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

/* Exercise 1-16: Revise the main routine of the longest-line program so it will correctly print the length of 
an arbitrarily long input lines, and as much as possible of the text */
int revprintlongestline()
{
    int len;
    int max;
    int numlen;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getline1(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
            numlen = len;
        }
    if (max > 0)
        printf("length of line: %d ; longest string: %s", numlen, longest);
    return 0;
}

/* Exercise 1-17: Write a program to print all input lines that are longer than 80 characters. */
int printlinesover80()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline1(line, MAXLINE)) > 0) 
        if ((len - 1) > 80) { //getline1 adds 1 from \n
            printf("length: %d ; string: %s", (len - 1), line);
        }
    return 0;
}

