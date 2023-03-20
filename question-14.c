/*14.	Write a program for output:.
EEEEE
DDDD
CCC
BB
A
*/

#include <stdio.h>

int main() {
   char ch;
   int i, j;
   for (i = 4; i >= 0; i--) { // loop for rows
      ch = 'A' + i;           // set starting character for each row
      for (j = 0; j <= i; j++) { // loop for columns
         printf("%c", ch);       // print current character
      }
      printf("\n"); // move to next line after each row is printed
   }
   return 0;
}
