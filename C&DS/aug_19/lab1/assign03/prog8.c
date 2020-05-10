#include<stdio.h>
void func(int*, int);
void main()
{
	int a[40];
	int n;
	printf("\n Enter the size of the integer : ");
	scanf("%d",&n);
	for (int i=0 ; i<n ; i++)
	{
		printf("\n Enter the %d number : ",i+1);
		scanf("%d", &a[i]);
	}
	int sum, min, max;
	sum = 0;
	min=a[0];
	max=a[0];
	for(int j=1 ; j<=n ; j++)
	{
		sum+=a[j-1];
		if ( a[j-1] < min )
				min = a[j-1];
		else
		if ( a[j-1] > max )
				max = a[j-1];
	}
	printf("\n SUM : %d ; MAX : %d ; MIN : %d \n", sum, max, min);	
}



