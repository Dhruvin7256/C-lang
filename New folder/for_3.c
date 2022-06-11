#include<stdio.h>
int main()
{
	int i,j=-1;
	for(i=2;i<=10;i+=2)
	{
		printf("\n%d\n%d",j+=2,i*i);
	}	
}
