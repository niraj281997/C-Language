#include<stdio.h>
void fibb0(int);
int fibbo_rec(int);
int main()
{
	int n, x;
	printf("Enter the index : ");
	scanf("%d",&n);
	printf("With Iteration : \n");
	fibb0(n);
	printf("With Recursion : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",fibbo_rec(i));
	}
}
void fibb0(int n)
{
	int x[100];
	int i=2;
	if (n<=1)
	{
		printf("\n xxxxxxxxxx ");
	}
	else
	{
		x[0]=1;
		x[1]=1;
		printf("Series : %d %d ", x[0], x[1]);
		for( i ; i<n ; i++)
		{
			x[i] = x[i-1] + x[i-2];
			printf("%d ", x[i]);
		}
	}
}

int fibbo_rec(int n)
{
	if(n<=1)
		return 1;
	else
		{
		return (fibbo_rec(n-1)+fibbo_rec(n-2));
		}
}
