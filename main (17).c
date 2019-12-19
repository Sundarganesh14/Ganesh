#include <stdio.h>
int main()
{
    int a,b,op;
    scanf("%d%d%d",&a,&b,&op);
    printf("enter 2 values");
    switch (op)
    {
        case 1:printf("%d",a+b);
        break;
        case 2:printf("%d",a-b);
        break;
        case 3:printf("%d",a*b);
        break;
        default:printf("a and b is not possible");
        break;
    }
}