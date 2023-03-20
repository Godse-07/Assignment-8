/*
20.	Write a C program prints following picture.
A
AAA
AAAAAA
AAAAAAAAAA
AAAAAAAAAAAAAAA
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    int count = 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= count; j++) {
            printf("A");
        }
        count += 2;
        printf("\n");
    }

    return 0;
}
