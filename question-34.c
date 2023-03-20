/*
34.	Write a C program prints following picture.
AAAAABBBBCCCDDE
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("A");
        }
        for (j = 0; j < 4; j++) {
            printf("B");
        }
        if (i == 0) {
            printf("C");
        } else if (i == 1) {
            printf("D");
        } else if (i == 2) {
            printf("E");
        }
    }
    printf("\n");
    return 0;
}
