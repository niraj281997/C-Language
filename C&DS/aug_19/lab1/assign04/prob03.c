#include<stdio.h>

int sum1(int *, int);
int sum2(int *, int);

void main()
{
	int a[50],n,x;
	printf("\n Enter the Size : ");
	scanf("%d",&n);

	for(int i=0 ; i<n ; i++)
	{
		printf("\n Enter %d Number : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\n\n ------- OUTPUT ------\n");
	
	x = sum1(a,n);
	printf("\n 1. ITERATIVE APPROACH : SUM - %d \n",x);

	x = sum2(a,n);
	printf("\n 2. RECURSIVE APPROACH : SUM - %d \n",x);
	
}

int sum1 (int *x, int y)			// 1. ITERATIVE APPROACH
{
	int z=0;
	for(int i=0; i<y ; i++)
	{
		z += x[i];
	}
	return z;
}

int sum2 (int *a, int n)
{
	int x=0;
	if (n==0)
		return 0 ;	
	else
	{ 	x=n+sum2(a,n-1);
		return x;
	}



}
