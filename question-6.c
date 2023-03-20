/*6.	Write a program for output: ACEGI*/

#include <stdio.h>

int main() {
   int i;
   for (i = 1; i <= 9; i += 2) { // loop from A (ASCII 65) to I (ASCII 73)
      printf("%c", i + 64);    // print the letter (A = 65 in ASCII)
   }
   printf("\n"); // move to the next line after printing the pattern
   return 0;
}
