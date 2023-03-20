/*
28.	Write a C program prints following picture.
E
FE
GFE
HGFE
IHGFE

*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int r,c;

    for(r=69; r<=73; r++)
    {
        for(c=r; c>=69; c--)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
