#include <stdio.h>
int main()
{
    int x;
    printf("enter x");
    scanf("%x",&x);
    if(x%3)
    {
        printf("FIZZ");
    }
    else if (x%5)
    {
        printf("BUZZ");
    }
    else if(x%3&&x%5)
    {
        printf("FIZZBUZZ");
    }
    else
{
    printf("no");
}
return 0;
}