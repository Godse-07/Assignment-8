/*38.	Write a C program prints following picture.
XXXXX
AXXXX
AAXXX
AAAXX
AAAAX
*/

#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j < i)
                printf("%c", ch);
            else
                printf("X");
        }
        printf("\n");
    }

    return 0;
}
