/*
A
DF
GIK
NPRT
UWY[]
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    char c = 'A';

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", c);
            c += 2;
        }
        if (i % 2 == 0) {
            c -= 1;
        } else {
            c += 1;
        }
        printf("\n");
    }

    return 0;
}
