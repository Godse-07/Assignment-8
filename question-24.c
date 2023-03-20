/*24.	Write a C program prints following picture.
A
BA
CBA
DCBA
EDCBA
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    char c;

    for (i = 1; i <= n; i++) {
        c = 'A' + i - 1;
        for (j = 1; j <= i; j++) {
            printf("%c", c);
            c--;
        }
        printf("\n");
    }

    return 0;
}
