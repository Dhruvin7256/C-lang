#include<stdio.h>
int main()
{
	int i,a=0,b=1,c=1;
	for(i=0;i<=10;i++)
	{
		printf("\n%d",c);
		c=a+b;
		a=b;
		b=c;
	}

}