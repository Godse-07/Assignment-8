/*12.	Write a program for output:.
ABCDE
CDEF
EFG
GH
I
*/

#include <stdio.h>

int main() {
   char ch;
   int i, j;
   for (i = 0; i < 5; i += 2) { // loop for rows
      ch = 'A' + i;            // set starting character for each row
      for (j = 0; j < 5-i; j++) { // loop for columns
         printf("%c", ch++);     // print current character and increment
      }
      printf("\n"); // move to next line after each row is printed
   }
   return 0;
}

