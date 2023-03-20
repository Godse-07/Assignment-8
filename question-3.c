/*3.	  write a program to print given pattern.
                          A
                          BB
                          CCC
                          DDDD
*/

#include<stdio.h>
void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", i+64);
        }
        printf("\n");
    }
    
}