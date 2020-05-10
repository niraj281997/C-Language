#include<stdio.h>

void main()
{
	short int x;
	int *p,r;
	char *q;
	x=0x1155;

		printf("Original Hex Value : %x\n",x);	

		q=(char *)&x;
		
		printf("\n LITTLE ENDIAN \n");

		printf("\n%u %x \n",q, *q);
		printf("%u %x \n",q+1, *(q+1));

		r=*q;
		*q=*(q+1);
		*(q+1)=r;


	
		printf("\n BIG ENDIAN \n");

		printf("\n%u %x \n",q, *q);
		printf("%u %x \n",q+1, *(q+1));

		

}
