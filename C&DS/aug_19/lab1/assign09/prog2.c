#include<stdio.h>

struct A{
	int x;
	float y;
	double z;
	char ch;
};

void main()
{
	struct A a1;
	int *x1;
	float *x2;
	double *x3;
	char *x4;

	a1.x = 5;
	a1.y = 12.4;
	a1.z = 32.11;
	a1.ch = 'a';

	x1=&a1.x;
	x2=&a1.y;
	x3=&a1.z;
	x4=&a1.ch;
                                                //Finding the Addresses
	printf("\nAddress of int: %u\n",x1);
	printf("\nAddress of float: %u\n",x2);
	printf("\nAddress of double: %u\n",x3);
	printf("\nAddress of char: %u\n",x4);

}



