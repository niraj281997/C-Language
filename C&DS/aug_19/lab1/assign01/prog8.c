#include<stdio.h>

void main()
{
	int n;
	printf("\n Enter the Size : ");
	scanf("%d",&n);
	printf(" \n\n ");
	for(int i=1 ; i<=n ; i++)
	{
		for (int j=i ; j>0 ; j--)
		{
			printf("%d",i);
		}
		printf(" \n ");
	}
}
