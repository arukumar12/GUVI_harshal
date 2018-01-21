#include <stdio.h>

int main(void) {
	int n,i,count=0;
	printf("enter n.0 \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		count++;
			
		}
	}
	if(count==2)
	{
	printf("prime");
}
else
{
	printf("not prime");
}
	
	return 0;
}
