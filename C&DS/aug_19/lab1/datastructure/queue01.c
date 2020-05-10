#include<stdio.h>
#include<stdlib.h>

struct node{
	int x;
	char y;
	struct node *next;
	};

void take(int *, char *);
void reverseDisplay(struct node *);
void deleteAtBeginning(struct node **);
void display(struct node *);
void insertAtEnd(struct node**,int ,char );

int main(){

	struct node *head=NULL;
	int a,n,p;
	char ch;

	while(1)
	{	
		printf("\nSelect the option you want to choose : \n");
		printf("\t\t\t1--Insert element to the queue\n");
		printf("\t\t\t2--Delete element from the queue\n");
		printf("\t\t\t3--Display the Queue\n");
		printf("\t\t\t4--Reverse display the Queue\n");
		printf("\t\t\t5--Exit the program\n");
		printf("Your choice is : ");
		scanf("%d",&n);
	
		switch(n)
		{
			case 1:	take(&a,&ch);
				insertAtEnd(&head,a,ch);
				break;
			case 2: if(head==NULL)
				{	
					printf("\n EMPTY LINKED LIST ");
					break;
				}
				deleteAtBeginning(&head);
				break;
			case 3: if (head==NULL)
				{
					printf("\nEMPTY LINKED LIST");
					break;
				}
				printf("\nYour linked list is \n");
				display(head);
				break;
			case 4: if (head==NULL)
				{
					printf("\nEMPTY LINKED LIST");
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
		printf(" [%d][%c] <--- ",t->x,t->y);
		t=t->next;
	}
}


void deleteAtBeginning(struct node **q)
{
	struct node *temp;
	temp=(*q);
	(*q)=(*q)->next;
	printf(" deleted is %d %c",temp->x,temp->y);
	free(temp);

}



void reverseDisplay(struct node *q)
{
	if(q->next!=NULL)
	{
		reverseDisplay(q->next);
	}
	printf(" ---> [%d][%c]",q->x,q->y);
}

