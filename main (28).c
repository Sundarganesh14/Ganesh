#include <stdio.h>
void main()
{
    int N,i,j;
    scanf("%d ",&N);
    if(N>=5 && N<=10){
        for(i=N;i>=1; i--)
        {
        for(j=i;j<=N;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        }
    }
}