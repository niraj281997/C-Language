#include<stdio.h>
#include<stdlib.h>

struct node{
	int x;
	struct node *next;
	struct node *prev;	
};

void take(int *);
void reverseDisplay(struct node *);
void deleteAtPosition(struct node *,int );
void deleteAtEnd(struct node *);
void deleteAtBeginning(struct node **);
void insertAtPosition(struct node *,int, int );
void insertAtBeginning(struct node **,int);
void display(struct node *);
void insertAtEnd(struct node**,int);

int main()
{
	struct node *head=NULL;
	int a,n,p;

	while(1)
	{	
		printf("\t\t\tSelect the option you want to choose : \n");
		printf("\t\t\t1--Insert element in the End\t\t2--Insert element at the Start\n");
		printf("\t\t\t3--Insert element at any position\t4--Delete element from the Start\n");
		printf("\t\t\t5--Delete element from the end\t\t6--Delete element from a position\n");
		printf("\t\t\t7--Display the Link List\t\t8--Reverse display the Doubly Link List\n");
		printf("\t\t\t9--Exit the program\t\t\tYour choice is : ");
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
					printf("\n======= EMPTY LINKED LIST =======");
					break;
				}
				deleteAtBeginning(&head);
				break;
			case 5: if(head==NULL)
				{	
					printf("\n======= EMPTY LINKED LIST =======");
					break;
				}
				deleteAtEnd(head);
				break;
			case 6: if(head==NULL)
				{	
					printf("\n======= EMPTY LINKED LIST ======= ");
					break;
				}
				printf("\nEnter the node position which you want to delete : ");
			        scanf("%d",&p);	
				deleteAtPosition(head,p);
				break;
			case 7: if (head==NULL)
				{
					printf("\n======= EMPTY LINKED LIST ======= ");
					break;
				}
				printf("\nYour linked list is \n");
				display(head);
				break;
			case 8: if (head==NULL)
				{
					printf("\n======= EMPTY LINKED LIST =======");
					break;
				}
				printf("\nYour Reversed linked list is \n\n");
				reverseDisplay(head);
				printf("\n\n");
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
	struct node *t;						//Initialize a temp node
	t=(struct node*)malloc(sizeof(struct node));
	t->x=a;
	t->next=NULL;
	t->prev=NULL;

	if(*q==NULL)						//Check if Head is empty(1st element)
	{
		*q=t;
	}
	else							
                printf("[%d] <--- ",temp->x);
                temp=temp->next;
        }while(temp != t);
	{
		struct node *t1;			
		t1=*q;
		while(t1->next!=NULL)
		{
			t1=t1->next;				//t1 points to last element
		}
		t1->next=t;
		t->prev=t1;
	}
}

void display(struct node *t)
{
	while(t!=NULL)
	{
		printf("<--[%d]--> ",t->x);
		t=t->next;
	}
	printf("\n\n");
}

void insertAtBeginning(struct node **q,int a)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	t->x=a;
	t->next=NULL;
	t->prev=NULL;

	if(*q==NULL)
	{
		*q=t;
	}
	else
	{
		(*q)->prev = t;
		t->next = (*q);
		*q=t;
	}
}

void insertAtPosition(struct node *q,int a, int p)
{
	int i=0;
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->x=a;
	t->next=NULL;
	t->prev=NULL;

	struct node *t1;
	t1=q;
	while( i<(p-1) )
	{
		t1=t1->next;
		i++;
	}
	t->next = t1->next;
	t->prev = t1;
	t1->next->prev = t;
	t1->next = t;

}	

void deleteAtBeginning(struct node **q)
{
	struct node *temp;
	temp=(*q);
	(*q)=(*q)->next;
	(*q)->prev = NULL;
	free(temp);
}

void deleteAtEnd(struct node *q)
{
	while(q->next->next!=NULL)
	{
		q=q->next;
	}
	free(q->next);
	q->next=NULL;
}

void deleteAtPosition(struct node *q,int p)
{
	int i=0;
	struct node *t1, *t2;
	t1=q;
	while( i<(p-1) )
	{
		t2=t1;
		t1=t1->next;
		i++;
	}
	t1->next->prev = t2;
	t2->next=t1->next;
	free(t1);
}

void reverseDisplay(struct node *q)
{
	if(q->next!=NULL)
	{
		reverseDisplay(q->next);
	}
	printf(" <--[%d]--> ",q->x);
}
