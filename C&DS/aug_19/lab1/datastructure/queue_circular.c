#include<stdio.h>
#include<stdlib.h>

struct node
{
	int x;
	struct node *next;
};

struct node *last;

void take(int *);
void reverseDisplay(struct node *);
void deleteAtBeginning(struct node **);
void insertAtEnd(struct node**,int );
void display(struct node *);

int main(){

	struct node *head=NULL;
	int a,n,p;
	char ch;

	while(1)
	{	
		printf("\nSelect the option you want to choose : \n");
		printf("\t\t\t1--Insert element in the Queue\n");
		printf("\t\t\t2--Delete element from the Queue \n");
		printf("\t\t\t3--Display the Queue\n");
		printf("\t\t\t4--Reverse display the Queue\n");
		printf("\t\t\t5--Exit the program\n");
		printf("Your choice is : ");
		scanf("%d",&n);
	
			switch(n)
		{
			case 1:	take(&a);
				insertAtEnd(&head,a);
				break;
			case 2: if(head==NULL)
				{	
					printf("\n-----Queue is Empty----- \n");
					break;
				}
				deleteAtBeginning(&head);
				break;
			case 3: if (head==NULL)
				{
					printf("\n-----Queue is Empty----- \n");
					break;
				}
				printf("\nYour linked list is \n");
				display(head);
				break;
			case 4: if (head==NULL)
				{
					printf("\n-----Queue is Empty----- \n");
					break;
				}
				printf("\nYour Reversed linked list is \n\n");
				reverseDisplay(head);
				break;
			case 5:
				exit(1);
			default : printf("\nEnter Correct Choice : ");
				  break;
		}
	}
}

void take(int *a)
{
	printf("Enter a Number : ");
	scanf("%d",a);
}

void insertAtEnd(struct node **q,int a)
{
	struct node *t;						
	t=(struct node*)malloc(sizeof(struct node));
	t->x=a;							
	t->next=NULL;

	if(*q==NULL)						// Checking if the List is Empty
	{
		*q=t;
		last = *q;
		t->next = t;
	}

	else
	{
		last->next=t;
		t->next=*q;					//back to front
		last = t;
	}
}


void display(struct node *t)
{
	struct node *temp;
	temp = t;
	do 
	{
		printf("[%d] <--- ",temp->x);
		temp=temp->next;
	}while(temp != t);
	printf("\n\n");
}



void deleteAtBeginning(struct node **q)
{
	if((*q)->next == (*q))
	{
		printf("\n-------Deleting the Last Element--------\n");
		free(*q);
		last=NULL;
		(*q)=NULL;
	}
	else
	{
		struct node *temp;
		temp=(*q);
		(*q)=(*q)->next;
		free(temp);
		last->next = *q;
	}

}


void reverseDisplay(struct node *q)
{
	if((q)!=last)
	{
		reverseDisplay(q->next);
	}
	printf(" ---> [%d] ",q->x);
}

