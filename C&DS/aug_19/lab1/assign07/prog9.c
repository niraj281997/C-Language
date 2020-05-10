#include<stdio.h>

int *retarradd(int *, int);

int (*retarr(int *)[5]);

void main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={4,4,4,4,4};

	int *p1;
	int (*p2)[5];

	p1 = retarradd(a,5);
	p2 = retarr(b);

	for(int i=0; i<5 ; i++)
		printf("%d  ",p1[i]);

	printf("\n ");

	for(int i=0; i<5 ; i++)
		printf("%d  ", *p2[i]);

}

int *retarradd(int *a,int num)
{
	for(int i=0 ; i<num ; i++)
	{	*(a+i) += 1;
	}
	return a;
}

int (*retarr(int *b)[5])
{
	for(int i=0 ; i<5 ; i++)
		*(b+i) += 1;
	return b;
}
