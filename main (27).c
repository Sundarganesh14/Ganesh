/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int N,i,j,k;
    scanf("%d",&N);
    if(N>=5 && N<=15)
    {
        for(i=1;i<=N; i++)
        {
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
        printf("%d",k);
    }
    printf("\n");
}
}
}