#include<stdio.h>

typedef int (*pftype)(int,int);
typedef int (*pftype1)();
pftype SUM;
pftype1 TAKE;

int addition(int x, int y)
{
	int z = x + y;
	return z;
}
int enter()
{
	static int gg;
	printf("\nEnter a Number : ");
	scanf("%d",&gg);
	return gg;
}
void main()
{
	int a=20, b=30;
	SUM = addition;
	TAKE = enter;
	int x;
	x = TAKE();
	int y = SUM(x,30);
	printf("\nResult (Number + 30) : %d\n",y);
}
