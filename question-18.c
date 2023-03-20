/*
18.	The given program prints following picture.
A
AA
AAA
AAAA
AAAAA 
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("A");
        }
        printf("\n");
    }

    return 0;
}
