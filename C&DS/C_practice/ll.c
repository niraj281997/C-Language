#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
	{
 	char name[20];
 	int num;
 	int sub1;
	int sub2;
	float avg;
	struct node *next;
	};

int p(struct node * tra)
	{ int i=0;
		while (tra->next!=NULL)
		{	i++;				
		        printf("%d->>>\n",i);
			printf("NAME- %s\n",tra->name );
			printf("ROLLNUMBER- %d\n",tra->num);
			printf("MICROCONTROLLER -%d\n",tra->sub1);
			printf("OS -%d\n",tra->sub2);
			printf("average %f\n\n",tra->avg);
			//printf("\n");
			tra=tra->next;
						
		}
			i++;
			printf("%d->>>\n",i);
			printf("NAME- %s\n",tra->name );
			printf("ROLLNUMBER- %d\n",tra->num);
			printf("MICTROCONTROLLER - %d\n",tra->sub1);
			printf("OS-%d\n",tra->sub2);
			printf("average %f\n\n",tra->avg);
			return i;		

	}

void DAP (struct node ** temp)
{ 	struct node *t1,*t2;
	t1=*temp;
	int y;
        int x=0;
	p(*temp);	
	printf("ENTER NODE POSITION THAT YOU WANT DELETE\n");
	scanf("%d",&y);
		for(x=1;x<y;x++)      		
		{
			t1=t1->next;
		}
		t2=t1->next;
		t1=t1->next->next;
}
			
		
void EAP (struct node ** temp)
{ 	struct node *t1;
	t1=*temp;
	int y;
        int x=0;
	p(*temp);	
	printf("ENTER NODE POSITION ON THAT YOU WANT TO ADD NEW DATA\n");
	scanf("%d",&y);
		for(x=1;x<y;x++)      		
		{
			t1=t1->next;
		}

		char n[20];
		int numb;
		int s1;
		int s2;
		float  av;
		
			struct node *t;
			t= malloc(sizeof(struct node));
			printf("ENTER NAME\n ");
			scanf("%s",n);
		//	__fpurge(stdin);
				printf("NUMBER ");
				scanf("%d",&numb);
			//__fpurge(stdin);
			printf("MICROCONTROLLER \n");
			scanf("%d",&s1);
				printf("OS\n ");
				scanf("%d",&s2);
		//	__fpurge(stdin);
			av=((s1+s2)/2);
		strcpy(t->name,n);
		t->num=numb;
		t->sub1=s1;
		t->sub2=s2;
		t->avg=av;
		t->next=NULL;
		t->next=t1->next;
		t1->next=t;
}
	

				

void DLF(struct node **temp)
{
 struct node *t;
 t=*temp;
 if (t==NULL)
 { 
 printf("\n\n------NO DATA------- ");
 }
 else
 {
	 printf("FIRST NODE'S RELETED DATA IS DELETE\n");
  *temp=t->next;
  free(t);
 }


}

void DLE(struct node **temp)
	{
	 struct node *t;
 	t=*temp;
 	if (t==NULL)
 		{ 
 			printf("\n\n------NO DATA------- ");
 		}
	 else 
		{
		while (t->next->next!=NULL)
			{
				t=t->next;
		
			}
	 printf("FIRST NODE'S RELETED DATA IS DELETE\n");
  			t=t->next;
			free(t);

		}
	}
void EAF(struct node ** temp)
	{  
		char n[20];
		int numb;
		int s1;
		int s2;
		float  av;
		
			struct node *t;
			t= malloc(sizeof(struct node));
			printf("ENTER NAME\n ");
			scanf("%s",n);
		//	__fpurge(stdin);
				printf("NUMBER ");
				scanf("%d",&numb);
			//__fpurge(stdin);
	//								printf("MICROCONTROLLER \n");
			scanf("%d",&s1);
				printf("OS\n ");
				scanf("%d",&s2);
		//	__fpurge(stdin);
			av=((s1+s2)/2);
		strcpy(t->name,n);
		t->num=numb;
		t->sub1=s1;
		t->sub2=s2;
		t->avg=av;
		t->next=NULL;
			if (*temp==NULL)
			{
				*temp=t;
				
			}
			else 
			{

			//	while(t->next!=NULL)	// i made certain changes just go through it 
				//	t=t->next;

				t->next=*temp;
				*temp=t;
			}



	}	

void EAE(struct node **temp)
	{  
		char n[20];
		int numb;
		int s1;
		int s2;
		float av;
		
			struct node *t;
			t= malloc(sizeof(struct node));
			printf("ENTER NAME\n ");
			scanf("%s",n);
	//		__fpurge(stdin);
				printf("NUMBER\n ");
				scanf("%d",&numb);
		//	__fpurge(stdin);
			printf("MICROCONTROLLER\n");
			scanf("%d",&s1);
				printf("OS\n");
				scanf("%d",&s2);
			av=((s1+s2)/2);
		strcpy(t->name,n);
		t->num=numb;
		t->sub1=s1;
		t->sub2=s2;
		t->avg=av;
		t->next=NULL;
		struct node *t1=*temp;
			if (*temp==NULL)
			{
				*temp=t;
				
			}
			else 
			{ 
				while (t1->next!=NULL)
				{
					t1=t1->next;
				}
				t1->next=t;

			}
	}



void MOD (struct node ** temp)
{ 	int n,y;
        int x=0;	
	struct node *t;
	t=*temp;
	p(*temp);
	printf("CHECK WHICH NODE POSITIONS'DATA YOU WANT TO CHANGE:\n");
	scanf("%d",&y);
	if (y==1)
	{	int i,b,c;
		float d;
		char a[20];
		printf("1:CHANGE NAME\n2:NUMBER\n3:MICROCONTROLLER\n");
		printf("4:OS\n");
		scanf("%d",&i);
		switch(i)
		{
		 case 1: 
			
			printf("ENTER NEW NAME \n");
			scanf("%s",a);
			strcpy(t->name,a);
			break;
		 case 2 :
			
			printf(" ENTER NEW NUMBER\n");
			scanf("%d",&b);
			t->num=b;
			break;
		 case 3 :
			
			printf(" ENTER NEW MICROCONTROLLER\n");
			scanf("%d",&b);
			t->sub1=b;
			c=t->sub2;
			d=((b+c)/2);
			t->avg=d;
			break;
		 case 4 :
			
			printf(" ENTER NEW OS MARK\n");
			scanf("%d",&b);
			t->sub2=b;
			c=t->sub1;
			d=((b+c)/2);
			t->avg=d;
			break;		
		}

	}


	else 
	{

	       	char a[20];
		int i,b,c;
		float d;
		for(x=0;x<y;x++)      		
		{
			t=t->next;
			x++;
		//	printf("hello>>>>\n");
		}
		//t=t->next;
		printf("1:CHANGE NAME\n2:NUMBER\n3:MICROCONTROLLER\n");
		printf("4:OS\n");
		scanf("%d",&i);
		switch(i)
		{
		 case 1:
			 printf("ENTER NEW NAME \n");
			scanf("%s",a);
			strcpy(t->name,a);
			break;
		 case 2 :
			
			printf(" ENTER NEW NUMBER\n");
			scanf("%d",&b);
			t->num=b;
			break;
		 case 3 :
			printf(" ENTER NEW MICROCONTROLLER\n");
			scanf("%d",&b);
			t->sub1=b;
			 c=t->sub2;
			 d=((b+c)/2);
			t->avg=d;
			break;
		 case 4 :
			
			printf(" ENTER NEW OS MARK\n");
			scanf("%d",&b);
			t->sub2=b;
			c=t->sub1;
			d=((b+c)/2);
			t->avg=d;
			break;
		}
	}
}
					//	while ()
	




 
int main()
{

	 int n,d;
 	struct node *head=NULL;
		while(1)
		{
			printf("\n\n1:ENTER AT FIRST\n2:ENTER AT END\n3:DISPLAY\n");
			printf("4:MODIFICATION\n5:DELETE AT FIRST\n6:DELETE AT END \n7:ENTER NEW DATA  AT PARTICULER NODE LOCATION\n8:DELERE AT PARTICULER NODE LOCATION\n");
			printf("10:EXIT\n");
			printf("ENTER CHOICE=");
			scanf("%d",&n);
			switch(n)
			{
			    case 1:
				    EAF(&head);
				    break;
			    case 2: 
				    EAE(&head);
				    break;
			    case 3:
				    d=p(head);
				    break;
			    case 4:
				    MOD(&head);
				    break;
			    case 5: 
				    DLF(&head);
				    break; 
			    case 6: 
				    DLE(&head);
		    		    break;		    
			    case 7:
				   EAP(&head);
				    break;
//			    case 8:
					
			    case 10:
			    		exit(0);
			    default:
					printf("\n\n\t\t\t\tINVALID ENTERY\n");		
			}


		}

}



