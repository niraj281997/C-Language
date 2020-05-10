#include<stdio.h>

int fact(int);
void main()
{
	int n;
	printf("\n Enter the number : ");
	scanf("%d",&n);
	int f = fact(n);
	printf("\n Factorial of the number : %d \n ",f);
}

int fact(int x)
{
	int temp=1;
	for (int i=0 ; x>0 ; i++)
	{	temp = temp*x;
	 	x--;
	}
	return temp;
}
