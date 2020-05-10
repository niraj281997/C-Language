#include<stdio.h>

void main()
{
	int num;
	printf("\n Enter the Number : ");
	scanf("%d", &num);
	int temp, z, sum=0;
	temp = num;
	while(temp>9)
	{
		sum=0;
		for(int i=0 ; temp>0 ; i++)
		{	z = temp%10;
			sum = z + sum;
			temp = temp/10;	
		}
		temp = sum;
	}
	printf("\n Result : %d\n", temp);
}

