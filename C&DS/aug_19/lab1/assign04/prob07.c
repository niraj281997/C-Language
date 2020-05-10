#include<stdio.h>

//void binary(int);
void division(int, int (*)[20], int );
void rev(int (*)[20]);
//void octal(int);
//void  hexadec(int);

void main()
{
	int dec, num, select;
	static int bin[20];
	static int oct[20];
	int (*binptr)[20];
	int (*octptr)[20];
	
	printf("\n Enter [1-] : \n1. Decimal to Binary\n2. Decimal to Octal\n :");
	scanf("%d",&select);

	printf("\n Enter the Decimal Number : ");
	scanf("%d",&dec);

	switch(select)
	{	
		case 1 : binptr=bin;
			 division(dec, binptr, 2);
		 	 printf("\nBinary Result : \n");
			 for(int i=0 ; i<20 ; i++)
		 		 printf("%d",*binptr[i]);
			 printf("\n");
			 break;
		case 2 : octptr = oct;
			 division(dec, octptr, 8);
			 printf("\nOctal Result : \n");
			 for(int i=0 ; i<20 ; i++)
				 printf("%d",*octptr[i]);
			 printf("\n");
			 break;
		default : printf("\nSelect the proper option..!!");
			  break;

	}
}

void division(int num, int (*ptr)[20], int div)
{
	for(int i=0 ; num>0 ; i++)
	{
		*ptr[i] = num%div;
		num = num/div;
	}
	rev(ptr);
}

void rev(int (*ptr)[20])
{
	int temp;
	for(int i=0;i<10;i++)
	{
		temp=*ptr[i];
		*ptr[i]=*ptr[19-i];
		*ptr[19-i]=temp;
	}
}


