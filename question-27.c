/*
27.	Write a C program prints following picture.
A
AC
ACE
ACEG
ACEGI

*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    

    for (i = 1; i <= n; i++) {
        char c = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", c);
            c += 2;
        }
        printf("\n");
    }

    return 0;
}
