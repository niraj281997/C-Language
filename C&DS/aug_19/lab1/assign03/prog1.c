#include<stdio.h>

int com(int, int);
int fact(int);

int main()
{
	int n, x,sp, i, j ;
	printf("\n Enter the Size : ");
	scanf("%d",&n);

	for (i=0 ; i<n ; i++)
	{
			// SPACE
		for (sp=0 ; sp<=n-(i+1) ; sp++)
		{
			printf("   ");
		}

			//VALUE
			
		for ( j=0 ; j<=i ; j++)
		{
			x = com(i,j);
				printf("%d",x);
			if ( i != j )
				printf("     ");		
		}
		printf("\n");

	}
}	

int com(int a, int b)
{	
	int s, n, r, temp;
	n = fact(a);
	r = fact(b);
	temp = fact(a-b);
	s = ( n / (temp*r) ); 
	return s;
}

int fact(int a)
{
	if (a==0)
		return 1;
	else
	{	int x=1;
		for (int i=1 ; i<=a ; i++)
			x = x*i;
	return x;
	}
}
