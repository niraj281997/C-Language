#include<stdio.h>

void dec2bin(int);
void dec2oct(int);
void dec2hex(int);

void main()
{
	int x,a, b;
	printf("\n Enter [1-3] : \n");
	printf("\n1. Decimal to Binary\n2.decimal to octal\n3.decimal to hex\n\t\t::  ");
	scanf("%d",&x);
	switch (x)
	{
	case 1: printf("\n Enter the Decimal Number : ");
	 	scanf("%d",&a);
		dec2bin(a);
		break;
	
	/*case 2 : printf("\n Enter the Decimal Number : ");
		 scanf("%d",&a);
		 dec2oct(a);
		 break;

	case 3 : printf("\n Enter the Decimal Number : ");
		 scanf("%d",&a);
		 dec2hex(a);
		 break;
	*/
	default: printf("\nEnter a valid response : //Restart ");
		  break;
	}
}

void dec2bin(int p)
{
	int a[10], b[10];
	int i,j;
	
	for(i=0 ; p!=0 ;i++)
	{
		if(p%2==0)
		{	a[i]=0;
			p/=2;
		}
		else
		{
			a[i]=1;
			p/=2;
		}
	}
	for (i=sizeof(a), j=0; j<sizeof(a) ; i--, j++)
	{
		b[j]=a[i];
	}
	printf("\n The Binary Output : ");
	for(i=0;i<sizeof(a);i++)
	{
		printf("%d ",b[i]);
	}
}
