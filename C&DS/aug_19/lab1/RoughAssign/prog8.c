#include<stdio.h>

void main()
{
	int a, b, x, y, z;
	int POP=1 ;
	printf("\n Enter the 2 numbers : ");
	scanf("%d %d",&a, &b);
	z=b;
	for(int i=0; a>0 ; i++)
	{
		x=a%10;
		a=a/10;
		for(int j=0;b>0;j++)
		{
			y=b%10;
			b=b/10;
			POP=POP*x*y;
		}
		b=z;}

printf(" POP =%d ", POP);
}
