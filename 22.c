#include <stdio.h>

int main(void)
{
	int a[100],n,m,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	printf("\nThe maximum element is %d ",m);
	return 0;
}
