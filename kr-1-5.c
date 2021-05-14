    /* 1.5 Character Input and Output */
    #include <stdio.h>

    /* 1.5.1 File Copying */
    void fileCopying() 
    {
        /* copy input to output; 1st version */
        int c;

        c = getchar();
        while (c != EOF) {
            putchar(c); 
            c = getchar();
        }
    }

    void fileCopying2() 
    {
        /* copy input to output; 2nd version */
        int c;

        while ((c = getchar())!= EOF) {
            printf("c=%d ", c);
            putchar(c);
        }
        printf("c1=%d ", c);
        putchar(c);

    }

    void fileCopying3() 
    {
        /* Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1*/
        int c;

        while (c = getchar() != EOF) {
            printf("c=%d ", c);
        }
    }

    void valueOfEOF() 
    {
        /* Exercise 1-7: Write a program to print the value of EOF */
        printf("%d\n", EOF); // EOF is -1
    }
    
    /* 1.5.2 Character Counting */
    void characterCounting() 
    {
        /* count characters input; 1st version */
        long nc;

        nc = 0;
        while (getchar() != EOF) {
            ++nc;
        }
        printf("%ld\n", nc); 
    }

    void characterCounting2() 
    {
        // TODO: extra D 
        /* count characters in input; 2nd version */
        double nc;

        // nc = 0;
        // for (nc = 0; getchar() != EOF; ++nc);
        //     printf(".");
        getchar();
        nc = 0;
        printf("%.0f\n", nc);
    }

    /* 1.5.3 Line Counting */
    void lineCounting()
    {
        /* count lines in input */
        int c, nl;

        nl = 0;
        while ((c = getchar()) != EOF)
            if (c == '\n')
                ++nl;
        printf("%d\n", nl);
    }

    void blankTabLineCounting() 
    {
        /* Exercise 1-8: Write a program to count blanks, tabs, and newlines */
        int c, bl, t, nl;

        bl = 0;
        t = 0;
        nl = 0;
        while ((c = getchar()) != EOF) {
            if (c == ' ')
                ++bl;
            if (c == '\t')
                ++t;
            if (c == '\n')
                ++nl;
        }
        printf("blanks: %03d tabs: %03d newlines: %03d\n", bl, t, nl);
    }

    void replaceBlanksFromInput() {
        /* Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */
        int c, prevC;

        prevC = 0;
        while ((c = getchar()) != EOF) {
            if (c != ' ' || prevC != ' ')
                putchar(c);
            prevC = c;
        }
    }

    void replaceTabBackspaceBackslash() {
        /* Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by //. */
        int c;

        while ((c = getchar()) != EOF) {
            if (c == '\t') {
                putchar('\\');
                putchar('t');
                continue;
            }
            if (c == '\b') {
                putchar('\\');
                putchar('b');
                continue;
            }
            if (c == '\\') {
                putchar('\\');
                putchar('\\');
                continue;
            }
            putchar(c);
        }
    }

    /* 1.5.4 Word Counting */
    void wordCounting()
    {
        /* count lines, words, and characters in input */
        #define IN  1 /* inside a word */
        #define OUT 0 /* outside a word */

        int c, nl, nw, nc, state;

        state = OUT;
        nl = nw = nc = 0;
        while ((c = getchar()) != EOF) {
            ++nc;
            if (c == '\n')
                ++nl;
            if (c == ' ' || c == '\n' || c == '\t')
                state = OUT;
            else if (state == OUT) {
                state = IN;
                ++nw;
            }
        }
        printf("%d %d %d\n", nl, nw, nc);
    }

    void printOneWordPerLine() {
        /* Exercise 1-1: Write a program that prints its input one word per line. */
        #define IN  1
        #define OUT 0
        
        int c, state;

        state = OUT;
        while ((c = getchar()) != EOF) {
            if (c == ' ' || c == '\n' || c == '\t')
                state = OUT;
            else if (state == OUT) {
                state = IN;
                putchar('\n');
                putchar(c);
            }
            else {
                putchar(c);
            }
            
        }
    }

    void main()
    {
        // fileCopying();
        // fileCopying2();
        // fileCopying3();
        // valueOfEOF();
        // characterCounting();
        // characterCounting2();
        // lineCounting();
        // blankTabLineCounting();
        // replaceBlanksFromInput();
        // replaceTabBackspaceBackslash();
        // wordCounting();
        // printOneWordPerLine();
    }