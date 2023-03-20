/*
36.	Write a C program prints following picture.
ABCDEXABCDEXABCDEXABCDEX
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 4; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("E");
    }
    printf("\n");
    return 0;
}
