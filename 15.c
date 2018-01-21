#include<stdio.h>
int main()
{
    int a,b,c,i ;
    printf("enter 2 n.o\n ");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
            
        }
    }
    return 0;
}

