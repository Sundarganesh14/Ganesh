#include <stdio.h>
int main()
{
int n1,n,rem,sum = 0,i,f;
scanf("%d",&n);
n1 =n;
while(n > 0)
{
    rem = n%10;
    f=1;
    for(i=1;i<=rem;i++)
    {
        f=f+1;
    }
    sum+=f;
    n=n/10;
}
if(sum==n1)
{
    printf("strong number");
}
else
{
    printf("not a strong number");
}
return 0;
}