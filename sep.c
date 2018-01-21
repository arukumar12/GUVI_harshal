
#include<stdio.h>
int main()
{
int i,f,l,temp=0;
printf("\nEnter the first number");
scanf("%d",&f);
printf("\nEnter the second number");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
temp=i%2;
if(temp!=0)
{
printf("\n%d",i);
}
}
return 0;
}
