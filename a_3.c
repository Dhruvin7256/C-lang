#include<stdio.h>
int main()
{
	int a[10],i,n=0;
	for(i=0;i<=9;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{  
	if(i%2!=0)
		{
		printf("\na[%d]%d",i,a[i]);
		n+=a[i];
		}	
} printf("\n Total : %d",n);
}