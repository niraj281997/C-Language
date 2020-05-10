#include<stdio.h>
void disp01(int *, int);
void disp02(int *, int, int);
void disp03(int *, int,  int);
void main()
{
	int a[50],i, n;
	printf("\n Enter the size : ");
	scanf("%d",&n);

	for(int i=0; i<n ; i++)
	{
		printf("\n\n Enter the %d Number : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n*****OUTPUT*****\n\n");
	i=0;
	disp02(a,n,i);
	i=n-1;
	printf("Reverse output\n\n");
	disp03(a,n,i);
}		

/*
void disp01(int *x, int y)
{
	int i, j, k;
	for ( i=0 ; i<y ; i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n\n Reverse Display \n ");
	for ( i-=1 ; i>=0 ; i--)
	{
		printf("%d ",x[i]);
	}
}
*/
static int flag;
void disp02(int *a, int n,int i)
{

	if(i==n)
	{
		return ;
	}
	printf("%d ",a[i]);
	disp02(a,n,i+1);
}



void disp03(int *a, int n,int i)
{
	if(i==0)
	{
		printf("%d ",a[0]);
		return ;
	}
	printf("%d ",a[i]);
	disp03(a,n,i-1);
}
