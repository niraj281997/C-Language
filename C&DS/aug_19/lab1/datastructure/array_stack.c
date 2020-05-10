#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int next=-1;

void take(int *);
void insert(int *,int);
void display(int *);
void delete(int* );
void main()
{
	static int arr[SIZE];
	int choice, pos;
	int num;
	
	while(1)
	{
		printf("\nEnter your choice : ");
		printf("\n1.Insert\t2.Delete");
		printf("\n3.Display\t4.Exit ::");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:	take(&num);
				insert(arr,num);
				break;
			case 2:	delete(arr);	
				break;
			case 3: printf("\n");
				display(arr);
				break;
			case 4:	exit(1);
			default: printf("\nEnter a correct choice..!! ");
				 break;
		}
	}
}

void take(int *a)
{
	printf("\aEnter the Data : ");
	scanf("%d",&(*a));
}

void insert(int arr[SIZE],int data)
{
	if(next==(SIZE-1))
	{
		printf("\aThe Array is full");
		return;
	}
	else
	{
	next++;
	arr[next]=data;
	}
}

void display(int arr[SIZE])
{
	if(next==-1)
	{
		printf("\aThe Array is empty");
		return;
	}

	for(int i=next ; i!=-1 ; i--)
	{
		printf("%d\n", arr[i]);
	}
}

void delete(int arr[SIZE])
{	
	if(next==(-1))
	{
		printf("\aThe Array is empty");
		return;
	}
	else
	{
		arr[next]=0;
		next--;
	}
}
