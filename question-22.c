/*22.	Write a C program prints following picture.
A
AB
ABC
ABCD
ABCDE
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;
    char c = 'A';

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", c);
            c++;
        }
        c = 'A';
        printf("\n");
    }

    return 0;
}
