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
void deleteAtPosition(struct node *,int );
void deleteAtEnd(struct node **);
void deleteAtBeginning(struct node **);
void insertAtPosition(struct node *,int , int );
void insertAtBeginning(struct node **,int);
void insertAtEnd(struct node**,int );
void display(struct node *);

int main(){

	struct node *head=NULL;
	int a,n,p;
	char ch;

	while(1)
	{	
		printf("\nSelect the option you want to choose : \n");
		printf("\t\t\t1--Insert element in the end\n");
		printf("\t\t\t2--Insert element at the start\n");
		printf("\t\t\t3--Insert element at any position\n");
		printf("\t\t\t4--Delete element at the beginning \n");
		printf("\t\t\t5--Delete element at the end\n");
		printf("\t\t\t6--Delete element at the position\n");
		printf("\t\t\t7--Display the linked list\n");
		printf("\t\t\t8--Reverse display the linked list\n");
		printf("\t\t\t9--Exit the program\n");
		printf("Your choice is : ");
		scanf("%d",&n);
	
		switch(n)
		{
			case 1:	take(&a);
				insertAtEnd(&head,a);
				break;
			case 2:	take(&a);
				insertAtBeginning(&head,a);
				break;
			case 3:	printf("\nEnter the node position where you want to add : ");
				scanf("%d",&p);
				take(&a);
				insertAtPosition(head,a,p);
				break;
			case 4: if(head==NULL)
				{	
					printf("\n-----EMPTY LINKED LIST----- \n");
					break;
				}
				deleteAtBeginning(&head);
				break;
			case 5: if(head==NULL)
				{	
					printf("\n-----EMPTY LINKED LIST----- \n");
					break;
				}
				deleteAtEnd(&head);
				break;
			case 6: if(head==NULL)
				{	
					printf("\n-----EMPTY LINKED LIST----- \n");
					break;
				}
				printf("\nEnter the node position which you want to delete : ");
			        scanf("%d",&p);	
				deleteAtPosition(head,p);
				break;
			case 7: if (head==NULL)
				{
					printf("\n-----EMPTY LINKED LIST-----\n");
					break;
				}
				printf("\nYour linked list is \n");
				display(head);
				break;
			case 8: if (head==NULL)
				{
					printf("\n-----EMPTY LINKED LIST-----\n");
					break;
				}
				printf("\nYour Reversed linked list is \n\n");
				reverseDisplay(head);
				break;
			case 9:
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
		printf("[%d] ---> ",temp->x);
		temp=temp->next;
	}while(temp != t);
	printf("\n\n");
}

void insertAtBeginning(struct node **q,int a)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	t->x=a;
	t->next=*q;
	
	if(*q==NULL)						// Initializing the Empty List
	{
		*q=t;
		last = *q;
		t->next = t;
	}
	else
	{
		struct node *temp;
		temp = *q;
		*q = t;
		(*q)->next = temp;

		last->next = *q;
	}
}

void insertAtPosition(struct node *q,int a, int p)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->x=a;
	t->next=NULL;

	for(int i=2;i<p;i++)
	{
		q=q->next;
	}

	t->next=q->next;
	q->next=t;
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

void deleteAtEnd(struct node **q)
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
		while(temp->next != last)
		{
			temp=temp->next;
		}
		free(temp->next);					//free(last)
		last = temp;
		last->next=(*q);					//back to start
	}
}

void deleteAtPosition(struct node *q,int p)
{
	struct node *temp;
	for(int i=0;i<(p-2);i++)
	{
		q=q->next;
	}
	temp = q->next;
	q->next=q->next->next;
	free(temp);
}

void reverseDisplay(struct node *q)
{
	if(q!=last)
	{
		reverseDisplay(q->next);
	}
	printf(" <--- [%d] ",q->x);
}

