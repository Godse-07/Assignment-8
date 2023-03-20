/*
39.	Write a C program prints following picture.
ABCDEX
ABCDEX
ABCDEX
ABCDEX
*/

#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 0; i < 4; i++) {
        ch = 'A';
        for (j = 0; j < 6; j++) {
            if (j == 5)
                ch = 'X';
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
