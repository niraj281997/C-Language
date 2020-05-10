#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct std
{
	int roll;
	char name[10];
	struct std *next;
};

void IAE(struct std **);
void dis(struct std *);
void IAB(struct std **);
void IAP(struct std **);
void DFE(struct std **);
void DFB(struct std **);
void DFP(struct std **);
void count(struct std *);
int main()
{
	int choice;
	struct std *head=NULL;
	while(1)
	{
		printf("enter 1 to insertaAtEnd\n");
		printf("enter 2 to display\n");
		printf("enter 3 to exit\n");
		printf("enter 4 to insertaAtBeg\n");
		printf("enter 5 to insertaAtPos\n");
		printf("enter 6 to DeleteFromEnd\n");
		printf("enter 7 to DeletefromBeg\n");
		printf("enter 8 to DeleteFromPos\n");
		printf("enter 9 to Count\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			IAE(&head);
		break;
		case 2:
			dis(head);
		break;
		case 3:
			exit(0);
		break;
		case 4:
			IAB(&head);
		break;
		case 5:
			IAP(&head);
		break;
		case 6:
			DFE(&head);
		break;
		case 7:
			DFB(&head);
		break;
		case 8:
			DFP(&head);
		break;
		case 9:
			c=count(head);
			printf("The number of element are %d",c);
		break;
		case 10:
			revdis(&head);
		break;
		default:
			printf("Enter the correct value\n");
		break;
		}
	}
}

//Insert at end

void IAE(struct std **q)
{
	struct std *t;
	t=(struct std *)malloc(sizeof(struct std));
	printf("Enter the roll no.\n");
	scanf("%d""%s",&t->roll,t->name);
	t->next=NULL;
	if((*q)==NULL)
	{
		*q=t;
	}
	else
	{
		struct std *t1;
		t1=*q;
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=t;
	}
}

//display

void dis(struct std *t)
{
	printf("............................Linklist.................................\n");
	if(t==NULL)
	{
		printf("Linklist is Empty\n");
	}
	else
	{
		while(t!=NULL)
		{
			printf("%d\t""%s\t",t->roll,t->name);
			t=t->next;
			printf("\n");
		}printf("\n");
	}
}

//InsertAtBeg

void IAB(struct std **q)
{
	struct std *t;
	t=(struct std *)malloc(sizeof(struct std));
	printf("Enter the roll no.\n");
	scanf("%d""%s",&t->roll,t->name);
	t->next=*q;
	*q=t;
}

//InsertAtPos

void IAP(struct std **q)
{
	struct std *t;
	int pos,i=0;
	t=(struct std*)malloc(sizeof(struct std));
	printf("Enter the position\n");
	scanf("%d",&pos);
	if(pos==1)
	{
		IAB(q);
	}
	else
	{
		printf("Enter the roll no. and name\n");
		scanf("%d""%s",&t->roll,t->name);
		t->next=NULL;
	
		struct std *t1;
		t1=*q;
		while(++i<pos-1)
		{
			t1=t1->next;
		}
		t->next=t1->next;
		t1->next=t;
	}
}

//DeleteFromEnd

void DFE(struct std **q)
{
	struct std *t1,*t2;
	t1=*q;
	while(t1->next!=NULL)
	{
		t2=t1;
		t1=t1->next;
	}
	free(t1);
	t2->next=NULL;
}

//DeleteFromBeg

void DFB(struct std **q)
{
	struct std *t1;
	t1=*q;
	*q=t1->next;
	free(t1);
}

//DeleteFromPos

void  DFP(struct std **q)
{
	struct std *t1,*t2;
	int pos,i=0;
	printf("Enter the position\n");
	scanf("%d",&pos);
	if(pos==1)
	{
		DFB(q);
	}
	else
	{
		t1=*q;
		while(++i<pos)
		{
			t2=t1;
			t1=t1->next;
		}
		t2->next=t1->next;
		free(t1);
	}
}

int count(struct std *q)
{
	int i=0;
	while(q!=NULL)
	{
		++i;
		q=q->next;
	}
	return i;
}

void revdis(struct std *q)
{
	int c=count(q);
	if(c==0)
	{
		printf("Empty\n");
	}
	else
	{
		revdis(q->next,--count);
		printf

