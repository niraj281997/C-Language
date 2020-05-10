#include<stdio.h>
void main()
{
	int a[20], b[20], c[20];
	int size;

	printf("\n Size of both Array = ");
	scanf("%d", &size);

	printf("\n Enter 1st Array :  \n");

	for(int i= 0 ; i<size; i++)
	{
		printf("Enter %d element :  ", i+1);
		scanf("%d", &a[i]);
	}

	printf("\n Enter 2nd Array :  \n");

	for(int i= 0 ; i<size; i++)
	{
		printf("Enter %d element :  ", i+1);
		scanf("%d", &b[i]);
	}

	for (int i=0; i<size ; i++)
		c[i] = a[i] + b[i];


	printf("\n Final Array : \n ");
	for(int i = 0 ; i<size; i++)
	{
		printf("%d ", c[i]);
	}
}

