#include <stdio.h>
int main()
{
    int h;
    printf("enter height :");
    scanf("%d",&h);
    if(h<150)
    {
        printf("dwarf");
    }
    else if(h>150&&h<165)
    {
        printf("average height");
    }
    else if(h>165&&h<190)
    {
        printf("tall");
    }
    else if(h>190)
    {
        printf("abnormal height");
    }
    return 0;
}