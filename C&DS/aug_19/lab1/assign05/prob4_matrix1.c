#include<stdio.h>


void add(int (*)[3], int (*)[3]);
void sub(int (*)[3], int (*)[3]);
void mul(int (*)[3], int (*)[3]);

void main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[3][3] = { {17,38,9},{12,2,43},{1,2,3} };
	int i, j;
	printf("\n Matrix A : \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
			printf("%d  ",a[i][j]);
	printf("\n");
	}
	printf("\n Matrix B : \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
			printf("%d  ",b[i][j]);
	printf("\n");
	}
	add(a,b);
	sub(a,b);
	mul(a,b);
}

void add(int a[][3], int b[][3])
{
	int i,j;
	static int c[3][3];
	printf("\n Result of addition: \n");
	for(i=0 ;i<3 ;i++)
	{
	       	for(j=0; j<3 ; j++)
		{
			c[i][j] = a[i][j]+b[i][j];
			printf("%d  ",c[i][j]);
		}
	  	printf("\n");
	}
}

void sub(int a[][3], int b[][3])
{
	int i,j;
	static int c[3][3];	
	printf("\n Result of Subtraction: \n");
	for(i=0 ;i<3 ;i++)
	{
	       	for(j=0; j<3 ; j++)
		{
			c[i][j] = a[i][j]-b[i][j];
			printf("%d  ",c[i][j]);
		}
	  	printf("\n");
	}

}
void mul(int a[][3], int b[][3])
{
	int i,j,k,sum=0;
	static int c[3][3];	
	for(i=0 ;i<3 ;i++)
	{
		for (k=0 ; k<3 ; k++)
		{
			for( j=0 ; j<3 ; j++)
			{
				sum += a[i][j]*b[j][k];
			}
			c[i][k] = sum;
			sum=0;
		}
	}



	printf("\n Result of Multiplication : \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{	printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
