/*2.	Write a c program to print the following patterns:
(i)	BCDEF
(ii)	ABCDE
(iii)	CEGIK
(iv)	 FEDCB
(v)	  ABBCCC
*/

#include <stdio.h>
void main()
{
    for (int i = 66; i < 71; i++)
    {
        printf("%c", i);
    }
    printf("\n");
    for (int j = 65; j < 70; j++)
    {
        printf("%c", j);
    }
    printf("\n");
    for (int j = 67; j < 76; j += 2)
    {
        printf("%c", j);
    }
    printf("\n");
    for (int j = 70; j > 65; j--)
    {
        printf("%c", j);
    }
    printf("\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", i + 64);
        }
    }
}