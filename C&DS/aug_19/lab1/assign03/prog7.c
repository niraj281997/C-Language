#include<stdio.h>

void main()
{
	int a, b, c, d, d1;
	d = ++a,++b,++c,a+5;
	d1 = (++a, ++b, ++c, a+5);
	printf("\n\n value of d : %d \n",d);
	printf("\n\n value of d : %d \n",d1);
}
