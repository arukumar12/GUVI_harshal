#include <stdio.h>

int main() {
	int f,l,i,temp=0;
	printf("enter two n.o");
	scanf("%d%d",&f,&l);
	for(i=f+1;i<=l;i++)
	{
		temp=i%2;
		if(temp==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
