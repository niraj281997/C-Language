#include<stdio.h>

void main()
{
	int num;
	printf("\n Enter the Number : ");
	scanf("%d",&num);
	int temp, x=0;
	temp=num;
	for(int i=1 ; i<=temp/2 ; i++)
	{
		if(temp%i==0)
			x+=i;
	}
	if (x==num)
		printf("\n The Number is Perfect !\n");
	else
		printf("\n The Number is Not Perfect !\n");
}
	
