/*
29.	Write a C program prints following picture.
A
CA
ECA
GECA
IGECA
*/

#include <stdio.h>

void displayPattern() {
    int i, j;
    for (i = 65; i <= 73; i = i + 2) {
        for (j = i; j >= 65; j = j - 2) {
            printf("%c ", j);
        }
        printf("\n");
    }
}

int main() {
    displayPattern();
    return 0;
}

