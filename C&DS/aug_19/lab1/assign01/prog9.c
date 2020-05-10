#include<stdio.h>

void main()
{
	int n;
	printf("\n Enter the Size : ");
	scanf("%d",&n);
	printf(" \n\n");

	for(int i=1 ; i<=n ; i++)
	{
		for(int j=n-i ; j>0 ; j--)
			printf(" ");
		
		for(int k=i ; k>0 ; k--)
			printf("%d",i);
		
		printf("\n");
	}
	printf("\n\n ");
}
