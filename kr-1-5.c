    #include <stdio.h>

    void fileCopying() 
    {
        /* 1.5.1 File Copying */
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
    
    void characterCounting() 
    {
        /* 1.5.2 Character Counting */
        /* count characters input; 1st version */
        long nc;

        nc = 0;
        while (getchar() != EOF) {
            ++nc;
        }
        printf("%ld\n", nc); 
    }

    void main()
    {
        /* 1.5 Character Input and Output */
        //fileCopying();
        //fileCopying2();
        //fileCopying3();

        valueOfEOF();

        //characterCounting();
    }