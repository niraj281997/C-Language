#include<stdio.h>
#include <stdlib.h>
int main ()
{

	int n,j;
	printf("Ennter number :");
	scanf("%d",&n);
	printf("\n\n");

	for(int i=0;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
			printf(" ");
	
		for(j=i;j>0;j--)
			printf("%d",i);
		printf("\n");
	
	}
	



}
