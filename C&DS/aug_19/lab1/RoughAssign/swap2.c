#include <stdio.h>

void main()
{
	int a, b;
	a = 5;
	b = 10;
	printf("\n a = %d , b = %d", a, b);
	a += b;
	b = a - b;
	a = a - b;
	printf("\n a = %d , b = %d", a, b);
}

	
