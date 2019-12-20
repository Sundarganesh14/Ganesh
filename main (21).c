#include <stdio.h>
int main()    
{    
int n,r,sum=0,temp,no,cube=0;   
printf("enter the number=");    
scanf("%d",&no);
scanf("%d",&n);
temp=no;    
while(no>0)    
{    
r=no%10;    
cube=pow(r,n);
sum=sum+cube;    
no=no/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}
