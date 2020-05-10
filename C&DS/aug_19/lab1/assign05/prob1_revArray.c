#include<stdio.h>
void main()
{
	int a[] = {1,2,3,4,5};
	int size;

	printf("\n Size = ");
	scanf("%d", &size);
	printf("\n Enter Array :  \n");

	for(int i= 0 ; i<size; i++)
	{
		printf("Enter %d element :  ", i+1);
		scanf("%d", &a[i]);
	}

	for (int i=0; i<size/2 ; i++)
	{
		int j=size-1-i;
		a[i] = a[i] + a[j];
        	a[j] = a[i] - a[j];
		a[i] = a[i] - a[j];
	}	

	printf("\n Reversed Array : \n ");
	for(int i = 0 ; i<size; i++)
	{
		printf("%d ", a[i]);
	}
}

