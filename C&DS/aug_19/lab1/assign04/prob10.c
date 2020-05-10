#include<stdio.h>

int countR(int);
int count(int);
void main()
{
	int a; 
	printf("\n Enter the Number : ");
	scanf("%d", &a);
	printf("\n With Iteration :\nNumber of Digits : %d\n\n",count(a) );
	printf("\n With Recursion :\nNumber of Digits : %d\n\n",countR(a));
}

int count(int a)
{
	int i;
	for (i=1; a>0 ; i++)
	{
		a/=10;
	}
	return (i-1);
}

int countR(int a)
{
	int temp=0;
	if (a==0)
		return 0;
	else
	{
		temp=1+countR(a/10);
		return temp;
	}
}


	
