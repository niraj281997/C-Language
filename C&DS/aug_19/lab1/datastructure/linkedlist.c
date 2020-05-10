#include<stdio.h>
#include<stdlib.h>

struct node{
	int x;
	char y;
	struct node *next;
	};

void take(int *, char *);
void reverseDisplay(struct node *);
void deleteAtPosition(struct node *,int );
void deleteAtEnd(struct node *);
void deleteAtBeginning(struct node **);
void insertAtPosition(struct node *,int ,char , int );
void insertAtBeginning(struct node **,int ,char );
void display(struct node *);
void insertAtEnd(struct node**,int ,char );

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
		printf("\t\t\t4--Delete element at the end\n");
		printf("\t\t\t5--Delete element at the start\n");
		printf("\t\t\t6--Delete element at the position\n");
		printf("\t\t\t7--Display the linked list\n");
		printf("\t\t\t8--Reverse display the linked list\n");
		printf("\t\t\t9--Exit the program\n");
		printf("Your choice is : ");
		scanf("%d",&n);
	
		switch(n)
		{
			case 1:	take(&a,&ch);
				insertAtEnd(&head,a,ch);
				break;
			case 2:	take(&a,&ch);
				insertAtBeginning(&head,a,ch);
				break;
			case 3:	printf("\nEnter the node position where you want to add : ");
				scanf("%d",&p);
				take(&a,&ch);
				insertAtPosition(head,a,ch,p);
				break;
			case 4: if(head==NULL)
				{	
					printf("\n EMPTY LINKED LIST ");
					break;
				}
				deleteAtBeginning(&head);
				break;
			case 5: if(head==NULL)
				{	
					printf("\n EMPTY LINKED LIST ");
					break;
				}
				deleteAtEnd(head);
				break;
			case 6: if(head==NULL)
				{	
					printf("\n EMPTY LINKED LIST ");
					break;
				}
				printf("\nEnter the node position which you want to delete : ");
			        scanf("%d",&p);	
				deleteAtPosition(head,p);
				break;
			case 7: if (head==NULL)
				{
					printf("\nEMPTY LINKED LIST");
					break;
				}
				printf("\nYour linked list is \n");
				display(head);
				break;
			case 8: if (head==NULL)
				{
					printf("\nEMPTY LINKED LIST");
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

void take(int *a, char *b)
{
	printf("\nEnter a Number and a Character : ");
	scanf("%d %c",a,b);
}

void insertAtEnd(struct node **q,int a,char ch)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->x=a;
	t->y=ch;
	t->next=NULL;
	if(*q==NULL)
	{
		*q=t;
	}
	else
	{
		struct node *t1;
		t1=*q;
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=t;
	}
}

void display(struct node *t)
{
	while(t!=NULL)
	{
		printf(" [%d][%c] ---> ",t->x,t->y);
		t=t->next;
	}
}

void insertAtBeginning(struct node **q,int a,char ch)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	t->x=a;
	t->y=ch;
	t->next=*q;
	*q=t;
}

void insertAtPosition(struct node *q,int a,char ch, int p)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->x=a;
	t->y=ch;
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
	struct node *temp;
	temp=(*q);
	(*q)=(*q)->next;
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
	if(q->next!=NULL)
	{
		reverseDisplay(q->next);
	}
	printf(" <--- [%d][%c]",q->x,q->y);
}

