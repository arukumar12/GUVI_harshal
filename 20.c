#include<stdio.h>
int main()
{
    int n,i,c;
    printf("enter n.o");
    scanf("%d",&n);
    if(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            c=i*n;
            printf("%d",c);
        }
    }return 0;
}
