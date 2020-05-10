#include<stdio.h>

void sum(int [3][3]);

void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	sum(a);
}

void sum(int x[3][3])
{
	static int sum,min,max;
	int i,j;
	min = x[0][0];
	max = min;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	sum = sum+x[i][j];
			if(min<x[i][j])
				min=x[i][j];
			if(max>x[i][j])
				max=x[i][j];
		}
	}
	printf("\nSum %d\nMin %d\nMax %d\n",sum,min,max);

}



