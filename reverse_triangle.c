/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int r=n;r>0;r--)
    {
        for(int c=1;c<=n-r;c++)
        {
            printf("*");
        }
        for(int c=1;c<=r;c++)
        {
            printf(" ");
        }
        for(int c=1;c<=r;c++)
        {
            printf(" ");
        }
        for(int c=1;c<=n-r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
