#include<stdio.h>

int *fun(int x)
{	
	static int y;           //Using Static coz' after Function call the value won't be discarded
        y = x*x;
	return &y;	

}

void main()
{
	int a;
	printf("\nEnter the number : ");
	scanf("%d",&a);
	int *b;
	b = fun(a);
	printf("\nResult : %d\n",*b);
}
