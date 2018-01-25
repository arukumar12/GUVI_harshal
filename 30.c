#include<stdio.h>
int main(void)
{
int a,i,b,c=60;
scanf("%d",&a);
if(a>60)
{
i=a/60;
b=a%60;
printf(" %d hour  %d mins",i,b);
}
else
{
printf("%d",a);
}
return 0;
}
