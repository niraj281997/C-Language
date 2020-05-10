#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int next=0;

void take(int *);
void insertatend(int *,int);
void insertatbeg(int *,int);
void insertatpos(int *,int,int);
void display(int *);
void deleteatend(int* );
void deleteatbeg(int *);
void deleteatpos(int *,int);
void deleteatpos(int *,int);
void reverse_display(int *);
void main()
{
	static int arr[SIZE];
	int choice, pos;
	int num;
	
	while(1)
	{
		printf("\nEnter your choice : ");
		printf("\n1.Insert at End\n2.Insert at Beginning");
		printf("\n3.Insert at Position\n4.Delete at End");
		printf("\n5.Delete from Beginning\n6.Delete from a Position");
		printf("\n7.Display\n8.Reverse Display\n9.Exit ::");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:	take(&num);
				insertatend(arr,num);
				break;
			case 2:	take(&num);
				insertatbeg(arr,num);
				break;
			case 3:	printf("\aEnter the position at which you want to add the : ");
				scanf("%d",&pos);
				take(&num);
				if(pos==1)
					insertatbeg(arr,num);
				else if(pos<1)
					printf("Position not valid");
				else
					insertatpos(arr,pos,num);
				break;
			case 4:	deleteatend(arr);	
				break;
			case 5: deleteatbeg(arr);
				break;
			case 6: printf("\aEnter the position at which you want to Delete : ");
				scanf("%d",&pos);
				deleteatpos(arr,pos);
				break;
			case 7: display(arr);
				break;
			case 8: reverse_display(arr);
				break;
			case 9:	exit(1);
			default:
				break;

		}
	}
}

void take(int *a)
{
	printf("\aEnter the Data : ");
	scanf("%d",&(*a));
}

void insertatend(int arr[SIZE],int data)
{
	if(next==SIZE)
	{
		printf("\aThe Array is full");
		return;
	}
	else
	{
	arr[next++]=data;
	}
}

void insertatbeg(int arr[SIZE],int data)
{
	if(next==SIZE)
	{
		printf("\aThe Array is full");
		return;
	}
	else
	{
		for(int i=(SIZE-2) ; i>=0 ; i--)
		{
			arr[i+1]=arr[i];
		}
		arr[0]=data;
		next++;
	}
}

void display(int arr[SIZE])
{
	if(next==0)
		{
		printf("\aThe Array is empty");
		return;
		}
	for(int i=0 ; i!=next ; i++)
	{
		printf(" %d---> ", arr[i]);
	}
}

void insertatpos(int arr[SIZE],int pos,int data)
{
	if(next==SIZE)
	{
		printf("\aThe Array is full");
		return;
	}
	else
	{
		int i=SIZE-2;
		for(i;i>=(pos-1);i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos-1]=data;
		next++;
	}
}

void deleteatend(int arr[SIZE])
{	
	if(next==0)
		{
		printf("\aThe Array is empty");
		return;

		}
	next--;
	arr[next]=0;
}


void deleteatbeg(int arr[SIZE])
{
	if(next==0)
		{
		printf("\aThe Array is empty");
		return;
		}
	else
		{	for(int i=0;i<=(SIZE-2);i++)
			{
				arr[i]=arr[i+1];
			}	
		}
	next--;
}

void deleteatpos(int arr[SIZE],int pos)
{

	if(next==0)
	{
		printf("\aThe Array is empty");
		return;
	}
	else
	{
		arr[pos-1]=0;

		for(int i=(pos-1);i<(SIZE-1);i++)
		{
			arr[i]=arr[i+1];

		}

	}
	next--;
}

void reverse_display(int arr[SIZE])
{	
	for(int temp=next-1;temp>=0;temp--)
	{
		printf(" <---%d ",arr[temp]);
	}

}




