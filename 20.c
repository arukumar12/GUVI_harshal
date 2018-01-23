#include<stdio.h>
int main()
{
    int a,i,c=1;
    printf("enterv n.o");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=c*i;
    }
        printf("%d",c);
    return 0;
}
