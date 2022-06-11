#include<stdio.h>
int main()
{
	int i,j,a[5][5],n=0,n1=0,n2=0;
	 for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
	{
		printf("enter value of a : ");
		scanf("%d",&a[i][j]);
	}
	}
	 for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	{
		printf("\t%d",a[i][j]);	
	        if(i==j)
	{       
                
		n+=a[i][j];
		
		
	}
            
		 else if(i>j)
	{       
                
		n1+=a[i][j];
		
		
	}
 		
                else
	{       
                
		n2+=a[i][j];
		
		
	}
	}
		printf("\n");
	
	}
	        printf("\nDiagonal total:%d",n);
	 	printf("\nUpper triangle total:%d",n1);
		printf("\nLower triangle total:%d",n2);
}