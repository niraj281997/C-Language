/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int acc_no;
    char *name;
    int amount;
    struct node *next;
};

void add_account(struct node **,int ,char*, int);
void delete_account(struct node **,int);
void display(struct node *);

void main()
{
    int choice,acc,amt,sr;
    char aname[10];
    struct node *head=NULL;

    while(1)
    {
    printf("\n******* Watermeln Bank **********\n");
    printf("1.Open a Account\n");
    printf("2.Display Database\n");
    printf("3.Delete Account\n");
    printf("0.Exit\n\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                exit(0);
                break;
                
            case 1:
                printf("Enter Account no,Name,Amount :");
                scanf("%d%s%d",&acc,aname,&amt);
                add_account(&head,acc,aname,amt);
                break;
            
            case 2:
                printf("\n********** BANK DATABASE **********\n");
                display(head);
                break;

	    case 3:
		printf("Enter sr.no of the Account to be deleted:");
		scanf("%d",&sr);
		delete_account(&head,sr);
		break;
                
            default:
                printf("\n Invalid Choice !! \n");
                break;
            
        }
    
    
    }
    
}

void add_account(struct node **head,int acc,char *aname,int amt)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->acc_no=acc;
    temp->name=strdup(aname);						//imp
    temp->amount=amt;
    
    if(*head==NULL)
    {
        *head=temp;
    }
    else
    {
        struct node *t1;
        t1=*head;
        
        while(t1->next!=NULL)
        {
            t1=t1->next;
        }
        t1->next=temp;
    }
}

void display(struct node *head)
{
    int i=1;
	printf("Sr.no\tAccount_no\tName\tAmount\n");
    while(head!=NULL)
    {
        printf("%d]\t%d\t\t%s\t%d\n",i,head->acc_no,head->name,head->amount);
        head=head->next;
        i++;
    }
}
void delete_account(struct node **head,int sr)
{
	struct node *temp1,*temp2;
	int i=0;		
	temp1=*head;
	
	if(sr==1)
	{
	*head=temp1->next;
	free(temp1);
	}
	else
	{
	while(++i<sr)
	{
		temp2=temp1;
		temp1=temp1->next;
	}
	temp2->next=temp1->next;
	temp1->next=NULL;
	free(temp1);

	}
















}
