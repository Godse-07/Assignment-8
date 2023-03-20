/*4.	Write a C program to print the following outputs: 
(i)	ABCDEF
(ii)	BCDEFGHIJ
(iii)	ACEGI
(iv)	FEDCBA      
*/

#include <stdio.h>

int main() {
   // Output (i): ABCDEF
   char str1[] = "ABCDEF";
   printf("%s\n", str1);
   
   // Output (ii): BCDEFGHIJ
   char str2[] = "BCDEFGHIJ";
   printf("%s\n", str2);
   
   // Output (iii): ACEGI
   int i, j;
   for (i = 1; i <= 3; i += 2) {   // outer loop for A, C, and E
      for (j = 0; j <= 2; j += 2) { // inner loop for I, G, and E
         printf("%c", i + j + 64); // printing the letter (A = 65 in ASCII)
      }
   }
   printf("\n"); // move to the next line after printing the pattern
   
   // Output (iv): FEDCBA
   char str3[] = "FEDCBA";
   printf("%s\n", str3);
   
   return 0;
}
