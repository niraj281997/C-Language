#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char clear;


struct node 
{
	char name[40];
	char joining[20];
	struct  dep
	{
		char position[40];
		char department[20];
	}a1;
	int  login;
	char password[20];
	struct node *next;
};

struct nodo
{
	char name[40];
	char joining[20];
	struct  dep1
	{
		char position[40];
		char department[20];
	}a1;
	int  login;
	char password[20];
	struct node *next;
};




int p(struct node * tra)
{ 
	int i=0;
	while (tra->next!=NULL)
	{       i++;
		printf("%d->>>\n",i);
		printf("\t\tNAME- %s\n",tra->name );
		printf("\t\tLOGIN ID =%d\n",tra->login);
		tra=tra->next;

	}
	i++;
	printf("%d->>>\n",i);
	printf("\t\tNAME- %s\n",tra->name );
	printf("\t\tLOGIN ID =%d\n",tra->login);
	return i;

}










void MOD (struct node **temp)
{       int n,y;
        int x=0;
        struct node *t;
        t=*temp;
        p(*temp);
        
        //printf("CHECK WHICH NODE POSITIONS'DATA YOU WANT TO CHANGE:\n");
        printf("ENTER LOGIN ID :");
	scanf("%d",&y);
	while(t->next!=NULL)
	{
     	   if (t->login==y)
	{
			int i;
        	   char a[20];
        	   char b[20];
        	   char c[20];
        	   char d[20];
        	   char e[20];
        	   //char f[20];


               		printf("1:CHANGE NAME \n2:JOINING\n3:POSITION \n");
                	printf("4:DEPARTMENT\n 5:PASSWORD");
                	scanf("%d",&i);
                	switch(i)
     	           	{
         	        case 1:
	
        	                printf("ENTER NEW NAME \n");
                	        scanf("%s",a);
                        	strcpy(t->name,a);
                        	break;
                 	case 2 :

                        	printf(" UPDATE JOINING \n");
                        	scanf("%s",b);
                        	//t->num=b;
                        	strcpy(t->joining,b);
                        	break;
                 	case 3 :

                        	printf(" UPDATE POSITION \n");
                        	scanf("%s",c);
                        	strcpy(t->a1.position,c);
                        	//t->sub1=b;
                        	//c=t->sub2;
                        	//d=((b+c)/2);
                        	//	t->avg=d;
                        	break;
                 	case 4 :

                        	printf(" UPDATE DEPARTMENT \n");
                        	scanf("%s",d);
                        	strcpy(t->a1.department,c);
                        	//t->sub2=b;
                        	//c=t->sub1;
                        	//d=((b+c)/2);
                      	 	//t->avg=d;
                       		break;
			case 5: 
				printf("ENTER NEW PASSWORD \n");
				scanf("%s",e);
				strcpy(t->password,e);
				break;
                	}	

        	}
	t->next=t;
	}
	




if(t->next==NULL)
	{
 	    	if (t->login==y)
        	{ 
			  
			int i;
        	   char a[20];
        	   char b[20];
        	   char c[20];
        	   char d[20];
        	   char e[20];
			
               		printf("1:CHANGE NAME \n2:JOINING\n3:POSITION \n");
                	printf("4:DEPARTMENT\n 5:PASSWORD");
                	scanf("%d",&i);
                	switch(i)
			{
         	        case 1:
	
        	                printf("ENTER NEW NAME \n");
                	        scanf("%s",a);
                        	strcpy(t->name,a);
                        	break;
                 	case 2 :

                        	printf(" UPDATE JOINING \n");
                        	scanf("%s",b);
                        	//t->num=b;
                        	strcpy(t->joining,b);
                        	break;                 	case 3 :

                        	printf(" UPDATE POSITION \n");
                        	scanf("%s",c);
                        	strcpy(t->a1.position,c);
                        	//t->sub1=b;
                        	//c=t->sub2;
                        	//d=((b+c)/2);
                        	//	t->avg=d;
                        	break;
                 	case 4 :

                        	printf(" UPDATE DEPARTMENT \n");
                        	scanf("%s",d);
                        	strcpy(t->a1.department,c);
                        	//t->sub2=b;
                        	//c=t->sub1;
                        	//d=((b+c)/2);
                      	 	//t->avg=d;
                       		break;
			case 5: 
				printf("ENTER NEW PASSWORD \n");
				scanf("%s",e);
				strcpy(t->password,e);
				break;
			}			
		}
	}
}
   






void rootuser (struct nodo ** temp)
{

	static int  i=1707;
	char n[40];
	char pn[40];
	char dp[20];
	char j[20];
	char ps[20];
	printf("PLEASE ENTER THE INFORMATION OF THE ROOT USER \n\n");
	struct nodo *current;
	current= malloc(sizeof(struct node));
	current->next=NULL;
	//	struct dep *current1;
	//	current= malloc(sizeof(struct dep));
	printf("ENTER NAME \n");
	scanf("%c",&clear);
	fgets(n,20,stdin);
	//scanf("%s",n);

	printf("POSITION  \n");
	scanf("%c",&clear);
	fgets(pn,20,stdin);
	//scanf("%s",pn);

	printf("DEPARTMENT  \n");
	scanf("%c",&clear);
	fgets(dp,20,stdin);
	//scanf("%s",dp);

	printf("JOINNING\n");
	scanf("%c",&clear);
	fgets(j,20,stdin);
	//scanf("%s",j);

	//printf("ENTER NAME \n");
	//scanf("%s",l);
	printf("ENTER password \n");
	scanf("%s",ps);
	/* if(i%2==0)
	   {
	   i+=3;
	   }
	   else i+=5;
	   */
	strcpy(current->name,n);
	strcpy(current->a1.position,pn);
	strcpy(current->a1.department,dp);
	strcpy(current->joining,j);
	current->login=i;
	printf("Employee login ID :  %d\n",i);

	//printf("ENTER password \n");
	//scanf("%s",ps);
	strcpy(current->password,ps);
	*temp=current;
				printf("\n NAME : %s",current->name);
				printf("\n POSITION : %s",current->a1.position);
				printf("\n DEPARTMENT : %s",current->a1.department);

}






void rootp(struct nodo **temp1,struct node **temp)
{

	struct nodo *t1;
	t1=*temp1;
	int AA,X;
	static int i=0;
	char BB[50];
	char CC[50];
	printf("ENTER LOGIN ID: \n");
	scanf("%d",&AA);
		if(t1->login==AA)
		
		{	//char BB[40];
			printf("\n\nPASSWORD:\t");
			scanf("%s",BB);

			if (strcmp(t1->password,BB)==0)
			{
				printf("\n 1: INFO OF ALL EMPLOYEES : ");
				printf("\n 2: MODIFICATION OF EMPLOYEE DATA");
				//printf("\n DEPARTMENT : %s",t1->a1.department);
				//printf("\n MODIFICATION OF EMPLOYEE DATA %s",t1->a1.position);
				//printf("\n DEPARTMENT : %s",t1->a1.department);
				printf("\n\n ENTER YOUR CHOICE");
				scanf("%d",&X);
				switch(X)
				{
					case 1: p(*temp);
						break;
					case 2:
						MOD(temp);
						break;
					default: if(i<3)
						 {
						 	printf("INVALID TARGET");
						 	i++;
						 }
						else	
							exit(5);


				
				}

			}
			else printf("\n\n\nSECURITY BREACH NOTICED\n\n\n ");
		}

		

		else printf("\n\n\nSECURITY BREACH NOTICED\n\n\n ");




}





void login(struct node **temp)     
{
	printf("\n\nenter you login id :");
	int log;
	char pas[20];
	scanf("%d",&log);
	struct node *t1;
	t1=*temp;
	while( t1->next!=NULL)
	{		
		if (t1->login==log)  
		{
		   //t1=t1->next;
			printf("enter password:");
			//scanf("%c",&clear);     //with the help of fgets it is not allowing us to take Password with the space
			//fgets(pas,20,stdin);
			scanf("%s",pas);
			
				if( strcmp(t1->password,pas) ==0)
				{
					printf("\n NAME : %s",t1->name);
					printf("\n POSITION : %s",t1->a1.position);
					printf("\n DEPARTMENT : %s",t1->a1.department);
				}
				else 
				{
					printf("\n\n triverse INVALID ACCESS");
				}
		}
		else printf("INVALID USER NAME ");
		
			t1=t1->next;

	}
		/*else if (t1->login==log)
		{
			printf("enter password: ");
			scanf("%s",pas);
			{
				if( strcmp(t1->password,pas) ==0)
				{
					printf("\n NAME : %s",t1->name);
					printf("\n POSITION : %s",t1->a1.position);
					printf("\n DEPARTMENT : %s",t1->a1.department);
				}
				else 
				{
					printf("\n\n INVALID ACCESS");
				}


			}

		}
			t1=t1->next;
	}*/
	if (t1->next==NULL)
	{
		if (t1->login==log)
		{
			printf("enter password:");
			//scanf("%c",&clear);
			//fgets(pas,20,stdin);
			scanf("%s",pas);
				if( strcmp(t1->password,pas) ==0)
				{
					printf("\n NAME : %s",t1->name);
					printf("\n POSITION : %s",t1->a1.position);
					printf("\n DEPARTMENT: %s",t1->a1.department);
				}
				else 
				{
					printf("\n\n INVALID ACCESS");
				}

		}
		else 
			printf("\n\n non trivers outer INVALID USER ");  //why this gets printed?  after calling data
	}
}
void rootinfo(struct nodo **temp)
{
	struct nodo *t1;
	t1=*temp;
	int AA;
	char BB[50];
	char CC[50];
	printf("ENTER FORMAL LOGIN \n");
	scanf("%d",&AA);
		if(t1->login==AA)
		
		{	//char BB[40];
			printf("\n\nPASSWORD:\t");
			scanf("%s",BB);

			if (strcmp(t1->password,BB)==0)
			{
				printf("\n NAME : %s",t1->name);
				printf("\n POSITION : %s",t1->a1.position);
				printf("\n DEPARTMENT : %s",t1->a1.department);

			}
			else printf("\n\n\nSECURITY BREAHCE NOTICED\n\n\n ");
		}

		

		else printf("\n\n\nSECURITY BREACH NOTICED\n\n\n ");



}

void add(struct node ** temp)
{

	static int  i=19000;
	char n[20];
	char pn[20];
	char dp[20];
	char j[20];
	char ps[20];
	printf("PLEASE ENTER THE INFORMATION OF NEW EMPLOYEE\n\n");
	struct node *current;
	current= malloc(sizeof(struct node));
	current->next=NULL;
	//	struct dep *current1;
	//	current= malloc(sizeof(struct dep));
	printf("ENTER NAME \n");
	scanf("%c",&clear);
	fgets(n,20,stdin);
	//scanf("%s",n);

	//fpurge(stdin);
	printf("POSITION  \n");
	scanf("%c",&clear);
	fgets(pn,20,stdin);
	
	//scanf("%s",pn);

	printf("DEPARTMENT  \n");
	scanf("%c",&clear);
	fgets(dp,20,stdin);
	//scanf("%s",dp);

	printf("JOINNING\n");
	scanf("%c",&clear);
	fgets(j,20,stdin);
	
	//scanf("%s",j);

	//printf("ENTER NAME \n");
	//scanf("%s",l);
	printf("ENTER password \n");
	scanf("%c",&clear);
	fgets(ps,20,stdin);
	//scanf("%s",ps);
	if(i%2==0)
	{
		i+=3;
	}
	else i+=5;
	strcpy(current->name,n);
	strcpy(current->a1.position,pn);
	strcpy(current->a1.department,dp);
	strcpy(current->joining,j);
	current->login=i;
	printf("Employee login ID :  %d\n",i);

	//printf("ENTER password \n");
	//scanf("%s",ps);
	strcpy(current->password,ps);

	if (*temp==NULL)
	{
		*temp=current;

	}
	else 
	{
		//  struct node *t1;
		current->next=*temp;
		*temp=current;

	}

}	








int main ()
{
	int n;
	static int root=0;
	struct node *head=NULL;
	struct nodo *head1=NULL;
		printf("\n1>>>>>>>\n\t\t\t\t*********************COMPANY_BACK_END***************************");
	while(1)
	{

		printf("\n\n\n\n\t\t\t\t1:ENTER NEW EMPLOY INFO.\n\t\t\t\t2:USER LOGIN\n\t\t\t\t3:ADD ROOTUSER(ONR TIME ) \n\t\t\t\t4:PRINT NAME ACESSESS\n\t\t\t\t5:ROOTINFO\n\t\t\t\t6:ROOTUSERPERMISSIONS\n\t\t\t\t7:EXIT\n"); 
		printf("ENTER YOUR CHOICE :");
		scanf("%d",&n);
		switch(n)
		{	case 1: add(&head);
			break;
			case 2:if(head==NULL)
			       {
				       printf("NO DATA AVAILABLE");
			       }
			       else login(&head);
			       break;
			case 3:if (root==0)
			       {
				       rootuser(&head1);
				       root=1;
			       }
			       else 
				       printf("\n\n\nONLY ONE ROOT USER IS ALLOWED");
			       break;
			case 4: p(head);
				break;
			case 5:rootinfo(&head1);
			       	break;
			case 6: rootp(&head1,&head);
				break;

			case 7: exit(0);
			default :
				printf("UNACCEPTBLE PERFORMANCE\n TRY UNAUTHOR CASE \n\n");
				break;




		}	       




	}


}
