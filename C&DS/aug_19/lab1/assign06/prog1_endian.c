#include<stdio.h>

void main()
{
	int x;
	x=0x11223344;
	char *a;
	a=&x;
	
	printf("\nOriginal Number (in Hex) : %x",x);	
	printf("\nEndian:");	
	
	for(int i=0 ; i<sizeof(int) ; i++)
	printf("\n\t\tAddress : %u : Value : %x",(a+i),*(a+i));
	
	printf("\n\n");

}
