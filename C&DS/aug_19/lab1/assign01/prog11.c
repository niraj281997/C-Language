#include<stdio.h>

void main()
{
	int n, i, j, k ,c;
	printf("\n Enter Size : ");
	scanf("%d",&n);
	printf("\n\n");
	c=1;
	
	for( i=1 ; i<=n ; i++)				// Ascending Pyramid
	{
	
		for ( j=n-i ; j>0 ; j--)
		{
			printf(" ");
		}
			for ( k=c ; k>0 ; k--)
			{
				printf("%d", i);
			}
		printf("\n");
		c=c+2;					//c=7
	}
	c=c-2;
	for( i=n-1 ; i>=1 ; i--)				// Descending Pyramid
	{
		c=c-2;
		for ( j=n-i ; j>0 ; j--)
		{
			printf(" ");
		}
							//c=5
			for ( k=c ; k>0 ; k--)
			{
				printf("%d", i);
			}
		printf("\n");
	}
}
