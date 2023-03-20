/*7.	Write a program for output: FEDCBA  */

#include <stdio.h>

int main() {
   int i;
   for (i = 70; i >= 65; i--) { // loop from F (ASCII 70) to A (ASCII 65)
      printf("%c", i);         // print the letter
   }
   printf("\n"); // move to the next line after printing the pattern
   return 0;
}
