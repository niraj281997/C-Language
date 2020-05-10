#include<stdio.h>
#include<string.h>
void disp01(char *, int);
void disp02(char *, int, int);
void disp03(char *, int,  int);
void main()
{
	char a[50];
	int i, n;
	printf("\n\n Enter the String [Max 50] : ");
	scanf("%s",a);
	n = strlen(a);
	printf("\n\n *****OUTPUT*****\n\n 1.0 ITERATIVE APPROACH \n");
	
	disp01(a,n);		//Iterative approach
	
	i=0;
	printf("\n 2.0 RECURSIVE APPROACH \n Forward output \n");
	disp02(a,n,i);
	i=n-1;
	printf("\n\n Reverse output\n\n");
	disp03(a,n,i);
}		

void disp01(char *x, int y)			
{
	printf("\n Forward Output \n");				//Printing String by Iterative Approach
	for(int i=0 ; i<y ; i++)				//Forward
	{
		printf("%c",x[i]);
	}
	printf("\n Reverse output \n ");
	for (int i=y-1 ; i>=0 ; i--)				//Reverse
	{
		printf("%c",x[i]);
	}
	printf("\n");
}

void disp02(char *a, int n,int i)				//Printing String by Recursive Approach
{

	if(i==n)
	{
	return ;
	}
	printf("%c ",a[i]);					//Forward
	disp02(a,n,i+1);
}



void disp03(char *a, int n,int i)
{
	if(i==0)
	{
		printf("%c ",a[0]);
		return ;
	}
	printf("%c ",a[i]);					//Reverse
	disp03(a,n,i-1);
}



