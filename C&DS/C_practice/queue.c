#include<stdio.h>
#include<stdlib.h>
#define size 5
void add (int Arr[],int *rear,int *front ,int a)
{
	
if(*rear==-1)
	{
      	        (*rear)++;
		(*front)++;
        	Arr[*rear]=a;
	}

	else if (*rear==size-1)
		{
			printf("LAST NODE IS ADDED IN TO ARRAY QUEUE is Full\n");

		}
	else //if (*rear<size-1)
		{
			(*rear )++;
			Arr[*rear]=a;
		}	


}
void  delete( int  Arr[],int *front)
	{
		if (*front==size-1)
		{
			printf("LAST NODE IS DELETED \n");
		}
		else if (*front>size-1)
		{
			printf("NO DATA IS NOT AVAILABLE  \n");
		}
		else 
		{
			Arr[*front]=0;
			(*front)++;
	 	}
	}
void display(int  Arr[],int *front )
{
	for (int a=*front;a<size;a++)
			{
				printf("ARR[%d]=%d\n",a,Arr[a]);

			}


}
int main ()
{
	int front=-1;
	int rear=-1;
	int n;
	int data;
	while (1)
	{
	//printf("add Size of an array\n");
	//scanf("%d",&size);
		int arr[size];
	 printf("1:add\n2:delete\n3:print\n4:EXIT\n");
	 scanf("%d",&n);
	 switch(n)
	 {
	    case 1:
		    printf("\n ENTER DATA ");
		    scanf("%d",&data);
		    add(arr,&rear,&front,data);
		    break;
	    case 2:
		   delete(arr,&front);
	           break; 
	
	    case 3:
		   display(arr,&front);
	           break;
	    default:
		   printf("INVALID CASE\n\n");
		   break;
	    case 4:   exit(0); 
	 
	 
	 }
	
	
	
	}




}
