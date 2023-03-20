/*
31.	Write a C program prints following picture.
A
DF
GIK
JLNP
MOQSU
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    char c = 'A';

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", c + j * (2 * n - 2 * i + 1) / 2);
        }
        c += 2 * (n - i) + 1;
        printf("\n");
    }

    return 0;
}
