#include<stdio.h>

int sum(int x, int y)
{
	int z = x + y;
	return z;
}

int *(fp)(int, int);

void test(int a, int b, int *(fp)(int, int) )
{
	int z = fp(a,b);
	printf("\nzz : %d\n",z);
}

void main()
{
	int a=10, b=20;
	test(a,b,sum);
}
