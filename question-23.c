/*23.	Write a C program prints following picture.
A
BC
CDE
DEFG
EFGHI
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    char c = 'A';

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", c + j - 1);
        }
        c++;
        printf("\n");
    }

    return 0;
}
