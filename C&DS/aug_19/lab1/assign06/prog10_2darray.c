#include<stdio.h>

void main()
{
	int arr[3][4]={ {1,2,3,4},{5,6,7,8},{11,22,33,44} };
	int (*p)[3][4];
	p=&arr;
	int i, j;	
	
	printf("\narr[0][0] - %d ",arr[2][2]);			//1
	printf("\np[0][0] - %d ",(*p)[2][2]);			//1
//	printf("\n(*(p+0)+1) - %d ",);				//2
//	printf("\n*(*(arr+0)+1) - %d ",*(*(arr+0)+1));		//2
	
	printf("\n");

	printf("\nsize of - arr[i][j](element) -  %ld ",sizeof(arr[i][j]));
	printf("\nsize of - p(pointer) -  %ld ",sizeof(p));
	printf("\nsize of - *p - %ld ",sizeof(*p));
	printf("\nsize of - **p %ld ",sizeof(**p));
	printf("\nvalue of p - %ld ",p);
	printf("\nvalue of p+1 - %ld ",p+1);
	
	printf("\n");

}

