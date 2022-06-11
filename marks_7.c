#include<stdio.h>
int main()
{
	int r[5],m1[5],m2[5],m3[5],m4[5],i,n;
	for(i=0;i<5;i++)
	{
		printf("enter r[%d]",i);
		scanf("%d",&r[i]);

		printf("\tenter m1[%d]",i);
		scanf("%d",&m1[i]);

		printf("\tenter m2[%d]",i);
		scanf("%d",&m2[i]);
		
		printf("\tenter m3[%d]",i);
		scanf("%d",&m3[i]);
		
		printf("\tenter m4[%d]",i);
		scanf("%d",&m4[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nm1[%d]%d",i,m1[i]);
		n+=m1[i];
	        printf("\nm1[%d]%d",i,m2[i]);
		n+=m2[i];
		printf("\nm1[%d]%d",i,m3[i]);
		n+=m3[i];
		printf("\nm1[%d]%d",i,m4[i]);
		n+=m4[i];
	}
		printf("\n Total : %d",n);
}