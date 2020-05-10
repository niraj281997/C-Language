#include<stdio.h>

void main()
{
	int a, b, x, y, z;
	printf("\n Enter 2 Numbers : ");
	scanf("%d %d",&a,&b);
	int SOP=0;
	z = b;
	for ( int i=0 ; a>0 ; i++)
	{
		x = a%10;
		for (int j=0 ; b>0 ; j++)
		{
			y = b%10;
			SOP += (x*y);
			b/=10;
		}
		b = z;
		a/=10;
	}
	printf(" SOP = %d \n\n " ,SOP);
}

