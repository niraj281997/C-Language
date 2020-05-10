#include<stdio.h>

int sum1(int x, int y)
{
	x++;				//Valid
	y++;				//Valid
	int z = x+y;
	return z;
}

int sum2(const int x, int y)
{
	//x++;				//Invalid (const)
	y++;				//Valid
	int z = x+y;
	return z;
}

int sum3(const int x, const int y)
{
	//x++;				//Invalid (const)
	//y++;				//Invalid (const)
	int z = x+y;
	return z;
}
void main()
{
	int a=10;
	int b=20;

	printf("\nSum1 : %d",sum1(a,b));
	printf("\nSum2 : %d",sum2(a,b));
	printf("\nSum3 : %d",sum3(a,b));
}


