#include<stdio.h>

void main()
{
	int r1[20],r2[20],temp, num, sum;
	sum=0;
	printf("\n Enter the Number : ");
	scanf("%d",&num);
	temp=num;
	for(int i=0 ; num>0 ; i++)
	{
		r1[i] = num%10;
		r2[i] = r1[i]*r1[i]*r1[i];
		num/=10;
		sum += r2[i];
	}
	if ( sum == temp )	printf("\n Number is an Armstrong Number...!!! \n");
	else			printf("\n Number is Not Armstrong Number...!!! \n");
}
	

