#include<stdio.h>
int main()
{
	int i,n;
	printf("enter value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		i=i+1*i;
		printf("\n%d",i);
	}
	return 0;
}
