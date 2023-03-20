/*37.	Write a C program prints following picture.
 AAAAABBBBCCCDDE
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        
            printf("%c", 'A');
        
    }
    for (i = 1; i <= 4; i++) {
        
            printf("%c", 'B');
        
    }
   
    for (i = 1; i <= 3; i++) {
      
            printf("%c", 'C');
        
    }
    for (i = 1; i <= 2; i++) {
      
            printf("%c", 'D');
        
    }
    printf("E\n");
    return 0;
}
