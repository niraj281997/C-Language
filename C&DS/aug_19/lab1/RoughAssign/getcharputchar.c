#include<stdio.h>

void main()
{
	int a;
	for(int i=0 ; i<20 ; i++)
	{	printf("\n A \a");
		for(long int j=0 ; j<100000000000 ; j++)
			a=a+23;
	}
	getchar();
}

