#include<stdio.h>
int count(int, int*);
void main()
{
	int temp, rem=0,zero=0,one=0,num;
	printf("Enter the binary number : ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		if(temp%10==0)
		{
			zero++;
		}
		else
		{
			one++;
		}
		temp/=10;
	}
	printf("\nWITH ITERATIVE:\nThe number of zeros are %d and the number of ones are %d\n",zero,one);
	
	int a[]={0,0};
	int x;
	x = count(num, a);

	printf("\nWITH RECURSIVE:\nThe number of zeros are %d and the number of ones are %d\n",a[0],a[1]);

}

int count(int num, int *a)
{
	if (num==0)
	 return 0;
	else
	{
		if (num%10==0)
		{
			a[0]++;
			num/=10;
			count(num, a);
		}
		else
		{	
			a[1]++;
			num/=10;
			count(num, a);
		}
	}
	 return 0;
}
