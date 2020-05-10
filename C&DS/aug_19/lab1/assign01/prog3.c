#include<stdio.h>

void main()
{
	int a, b, c, temp;
	printf("\n Enter 3 numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	if( (a>=b)&&(b>=c) )
		temp = a;
	else 	if ( (b>=a) && (b>=c) ) 
			temp = b;
		else
		        temp = c;	
	printf("\n Biggest Number is %d ", temp);
}
