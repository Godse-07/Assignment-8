/*
19.	The given program prints following picture.
AA
AAA
AAAA
AAAAA
AAAAAA
*/
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 2; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("A");
        }
        printf("\n");
    }

    return 0;
}
