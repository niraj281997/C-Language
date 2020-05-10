#include<stdio.h>

int GCD1(int , int);
int GCD2(int, int, int);
void main()
{
	int a,b,g1, g2,n;
	printf("\n Enter the 1st Number : ");
	scanf("%d",&a);
	
	printf("\n Enter the 2nd Number : ");
	scanf("%d",&b);


	if ( b%a==0 )	g1 = a;
	else
	{	if ( a<b )	g1 = GCD1(a,b);
		else 		g1 = GCD1(b,a);
	}
	

	printf("\n\n ------- OUTPUT ------\n");
	printf("\n 1. ITERATIVE APPROACH :  - \n");
	printf("\n GCD : %d \n", g1);
	

	if ( b%a==0 )	g2=a;
	else
	{	if ( a<b )
		{	n=a/2;
			g2 = GCD2(a,b,n);
		}	
		else
		{
			n=b/2;
			g2 = GCD2(b,a,n);
		}
	}
	printf("\n 2. RECURSIVE APPROACH : -  \n");
	printf("\n GCD : %d \n", g2);
}

int GCD1(int a, int b)			// 1. ITERATIVE APPROACH
{
	int temp = a/2;
	for( int i=temp; i>0 ; temp-- )
	{	if ( (a%temp==0) && (b%temp==0) )
		{ 
			return temp;
		}
	}
}


int GCD2 (int a, int b, int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		if( (a%n==0) && (b%n==0))
			return n;
		else
			GCD2(a,b,n-1);
	}
}


