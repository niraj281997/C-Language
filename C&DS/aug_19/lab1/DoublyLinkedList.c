#include<stdio.h>
#include<stdlib.h>
struct node
{	
	struct node* prev;
	int num;
	struct node* next;

};
void insertAtBegg(struct node**,int);
void display_in(struct node*);
int main()
{
	struct node* head=NULL;
	int choice,num;

	printf("\nWelcome to the Doubly Linked List data structure \n");

	while(1)
	{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number you want to add in the DS : ");
				scanf("%d",&num);
				break;
			case 2:
				display_in(head);
				break;
			case 3:
				exit(1);

		}
	
	}



}

void insertAtBegg(struct node** q, int num)
{
	struct node* t;
	t=(struct node* )malloc(sizeof(struct node ));
	t->prev=NULL;
	t->num=num;
	if(*q==NULL)
	{
		t->next=NULL;
		*q=t;
		return;
	}
	t->next=(*q);
	*q=t;

}

void display_in(struct node* q)
{
	if(q==NULL)
		printf("The DDL is EMPTY");
	else if((q->prev=NULL) && (q->next=NULL))
		printf("%d ",q->num);
	else
	{
		while(q->next!=NULL)
		{		
		printf("%d ",q->num);
		q=q->next;
		}
	}
}


