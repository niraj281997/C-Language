#include<stdio.h>

void fun1(int, int, int *, int *);
void main()
{
	int a, b;
	int sum, prod;
	sum=0;
	prod=1;
	printf("\nEnter Two Numbers : ");
	scanf("%d %d",&a,&b);
	
	fun1(a, b, &sum, &prod);

	printf("\nSum : %d\nProduct : %d\n", sum, prod);

}

void fun1(int x, int y, int *s, int *p)
{	
	*s = x+y;
	*p = x*y;
}
