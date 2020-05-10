#include<stdio.h>
#include<stdlib.h>

struct node
{
	int x;
	struct node *next;
};

void display(struct node *);
void push(struct node **, int,struct node **);
void pop(struct node **, struct node **);
void main()
{
	int choice, num;
	struct node *top, *bottom;
	bottom = NULL;
	top = NULL;

	while(1)
	{
		printf("\nEnter Choice :\n1.Insert[PUSH]\t2.Delete[POP]\t3.Display\t4.Exit\t : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 : printf("\nEnter Data : ");
				 scanf("%d",&num);
				 push(&top,num,&bottom);
				 break;
			case 2 : if(top==NULL)
				 {
				 printf("\n\t\t======EMPTY STACK======\n");
				 break;
				 }
				 else
				 {
				 	printf("\n\t\t!!!...Deleting...!!!\n");
				 	pop(&top, &bottom);
				 	break;
				 }	
			case 3 : if(bottom==NULL)
				 {
					 printf("\n\t\t======EMPTY STACK======\n");
					 break;
				 }
				 else
				 	display(bottom);
				 printf("\n");
				 break;
			case 4 : 
				 exit(1);
		}
	}
}

void push(struct node **T, int n, struct node **B)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->x = n;
	temp->next= NULL;
	
	if(*B==NULL)
	{
		(*B)=temp;
		(*T)=(*B);
	}
	else
	{
		(*T)->next = temp;
		(*T)=temp;
	}
}

void pop(struct node **X, struct node **Y)
{
	if(*X==*Y)
	{
		free(*X);
		*X = NULL;
		*Y = NULL;
	}
	else
	{
		struct node *temp=*Y;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}	
		temp->next=NULL;
		free(*X);
		*X=temp;
	}
}

void display(struct node *Y)
{
	if(Y->next != NULL)
	{
		display(Y->next);	
	}
	printf("\n\t\t\t--- %d ---",Y->x);
}
