#include<stdio.h>

void main()
{

	int arr[10]={1,2,3,4,5,6,7,8,9,11};
	int (*p)[10];
	p=&arr;
	
	printf("\nLast Element : %d ",arr[9]);
	printf("\nLast Element : %d ",*(*(p+1)-1));
	printf("\n");

}
