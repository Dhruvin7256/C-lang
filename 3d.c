#include<stdio.h>
int main()
{
	int i,j,k,l,a[4][4],b[4][4];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		for(k=0;k<3;k++)
		{
                for(l=0;l<3;l++) 
                {
                   printf(" enter  a[ %d ][ %d ], b[ %d ][ %d ] ",i,j,k,l);
		   scanf("%d",&a[i][j],b[k][l]);
		    
		}
		}
	}
	   printf("\n Matrix a \n\n\n");
	   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		for(k=0;k<3;k++)
		{
                for(l=0;l<3;l++) 
                {
			printf("\t %d",a[i][j],b[k][l]);
		} 
			
		 
}
}
		printf("\n");
	}
}
}