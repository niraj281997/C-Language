#include<stdio.h>

void main()
{
	int x;
	int r;
	char *q;
	x=0x11223344;

		printf("Original Hex Value : %x",x);	

		q=(char *)&x;
		
		printf("\nLITTLE ENDIAN");

		for(int i=0 ; i<sizeof(int) ; i++)
		 	printf("\n%u %x ",q+i, *(q+i));
	
		r = *(q);
		*q = *(q+3);
		*(q+3) = r;

		r = *(q+1);
		*(q+1) = *(q+2);
		*(q+2) = r;
			
	
		printf("\n\nBIG ENDIAN");
		for(int i=0 ; i<sizeof(int) ; i++)
		 	printf("\n%u %x ",q+i, *(q+i));

		printf("\n\n");	

}
