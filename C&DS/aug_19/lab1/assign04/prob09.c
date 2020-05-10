#include<stdio.h>
int power(int,int);
void main()
{
	int num,ind,i,ans=1;
	printf("Enter the number and its power\n");
	scanf("%d%d",&num, &ind);
	for(i=0;i<ind;i++)
	{
		ans*=num;
	}
	printf("%d^%d=%d\n",num,ind,ans);
	
	printf("\n Recursive \n");
	printf("\n%d^%d=%d\n",num, ind, power(num,ind));
}

int power(int num,int ind)
{
	int temp=1;
	if(ind==0)
		return 1;
	else
	{
		temp =num*power(num,ind-1);
		return temp;
	}
}

			

