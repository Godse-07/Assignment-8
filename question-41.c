/*41.	 Write a C program prints following picture.
            A
          AB
        ABC
     ABCD
   ABCDE
 ABCDEF
*/

#include <stdio.h>

int main() {
    int i, j, k;
    char ch = 'A';

    for (i = 0; i < 6; i++) {
        for (j = i; j < 5; j++) {
            printf("  ");
        }
        for (k = 0; k <= i; k++) {
            printf("%c ", ch + k);
        }
        printf("\n");
    }

    return 0;
}
