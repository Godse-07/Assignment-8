/*8.	Write a program for output:.
ABCDE
BCDE
CDE
DE
E*/

#include <stdio.h>

int main() {
   char ch;
   int i, j;
   for (i = 0; i < 5; i++) {    // loop for rows
      ch = 'A' + i;            // set starting character for each row
      for (j = i; j < 5; j++) { // loop for columns
         printf("%c", ch++);   // print current character and increment
      }
      printf("\n"); // move to next line after each row is printed
   }
   return 0;
}
