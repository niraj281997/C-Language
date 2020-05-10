#include<stdio.h>

int sum1(int *, int);
int sum2(int *, int);

void main()
{
	int a[50],n,x;
	printf("\n Enter the Size : ");
	scanf("%d",&n);
 	a[0]=1;
	for(int i=1 ; i<=n ; i++)
	{
		a[i]=i;
	}

	printf("\n\n ------- OUTPUT ------\n");
	
	x = sum1(a,n);
	printf("\n 1. ITERATIVE APPROACH : Factorial - %d \n",x);

	x = sum2(a,n);
	printf("\n 2. RECURSIVE APPROACH : Factorial - %d \n",x);
	
}

int sum1 (int *x, int y)			// 1. ITERATIVE APPROACH
{
	int z=1;
	for(int i=0; i<=y ; i++)
	{
		z *= x[i];
	}
	return z;
}

int sum2 (int *a, int n)
{
	int x=1;
	if (n==0)
		return 1 ;	
	else
	{ 	x=n*sum2(a,n-1);
		return x;
	}



}
