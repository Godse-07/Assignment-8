/*33.	Write a C program prints following picture.
ABCDE
BDGI
CGK
DI
E

*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    char c = 'A';

    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i + 1; j++) {
            printf("%c", c + j * i + j * (i - 1) / 2);
        }
        c++;
        printf("\n");
    }

    return 0;
}


