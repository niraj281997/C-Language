#include<stdio.h>
int sum(int , int*);
void main()
{
	int n,a[10];
	printf("Total number are : \n ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter %d  number : \n ",i+1);
		scanf("%d",&a[i]);
	}
	int addition=sum(n,a);
	float mean=(float)(addition/n);
	printf("Addition = %d & Average = %f \n\n  ",addition,mean);
}

int sum(int num, int* arr)
{
	int temp=0;
	for(int i=0 ; i<num ; i++)
	{
		temp=temp+arr[i];
	}
	return temp;
}

