/*11.	Write a program for output:.
EFGHI
DEFG
CDE
BC
A
*/

#include <stdio.h>

int main() {
   char ch;
   int i, j;
   for (i = 0; i < 5; i++) {    // loop for rows
      ch = 'E' - i;            // set starting character for each row
      for (j = i; j < 5; j++) { // loop for columns
         printf("%c", ch++);   // print current character and increment
      }
      printf("\n"); // move to next line after each row is printed
   }
   return 0;
}
