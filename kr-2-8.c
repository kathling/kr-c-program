/* 2.8 Increment and Decrement Operators */
#include <stdio.h>
#include <string.h>

void main() 
{

}

/* strcat: concatenate t to the end of s; s must be big enough */
void strcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while(s[i] != '\0')                 /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* copy t*/
        ;
}


/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}