#include<stdio.h>
int power(int ,int,int);
void main()
{
	int a[20], x;
	int sum=0 ,size;

	printf("\n Size of Array = ");
	scanf("%d", &size);

	printf("\n Enter coefficients \n");

	for(int i= 0 ; i<size; i++)
	{
		printf("Enter %d coefficient :  ", i+1);
		scanf("%d", &a[i]);
	}

	printf("\n Enter value of x \n");
	scanf("%d",&x);
	for(int i= 0 ; i<size; i++)
	{
		sum=sum+(a[i]*power(size,x,i));
		
	}

		printf("The addition of polynomal is :%d  ",sum);
	

}

int power(int n,int x, int i)
{
	int temp=1;
	for(int j=0;j<n-i-1;j++)
	{
		temp=temp*x;

	}
	return temp;
}

