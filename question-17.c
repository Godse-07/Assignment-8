/*

17.	The given program prints following picture.
AAAAA
AAAA
AAA
AA
A
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("A");
        }
        printf("\n");
    }

    return 0;
}
