/*9.	Write a program for output:.
ABCDE
ABCD
ABC
AB
A
*/

#include <stdio.h>

int main() {
   char ch;
   int i, j;
   for (i = 5; i >= 1; i--) { // loop for rows
      ch = 'A';              // set starting character for each row
      for (j = 1; j <= i; j++) { // loop for columns
         printf("%c", ch++); // print current character and increment
      }
      printf("\n"); // move to next line after each row is printed
   }
   return 0;
}
