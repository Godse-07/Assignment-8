/*5.	Write a C program to print the following outputs:  BCDEFGHIJ*/

#include <stdio.h>

int main() {
   int i;
   for (i = 2; i <= 10; i++) { // loop from B (ASCII 66) to J (ASCII 74)
      printf("%c", i + 64);    // print the letter (A = 65 in ASCII)
   }
   printf("\n"); // move to the next line after printing the pattern
   return 0;
}
