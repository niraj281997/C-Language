#include<stdio.h>

struct Student
{
	int id;
	char gen;
	int std;
	struct dateS            //Nesting of Structure in Structure
	{
		int month;
		int year;
	}ds[10];
};

struct Teacher
{
	int tid;
	char gen;
	union subj              //Nesting of Union in Structure
	{
		int ssid;
		char ssname[20];
	}sub[10];
};

int main()
{
	struct Student s[10];
	struct Teacher t[10];
	int num1,num2;
	
	printf("\nEnter the number of Students : ");
	scanf("%d",&num1);

	for(int i=0 ; i<num1 ; i++)
	{	printf("\nEnter the Information of %d Student",i+1);
		printf("\nEnter the ID : ");
		scanf("%d",&s[i].id);
		__fpurge(stdin);
		printf("Enter the Gender : ");
		scanf("%c",&s[i].gen);
		printf("Enter the Standard : ");
		scanf("%d",&s[i].std);
		printf("Enter the Joining Month : ");
		scanf("%d",&s[i].ds[i].month);
		printf("Enter the Joining Year : ");
		scanf("%d",&s[i].ds[i].year);
	}

	printf("\nEnter the number of Teachers : ");
	scanf("%d",&num2);

	int temp;
	for(int i=0 ; i<num2 ; i++)
	{	printf("\nEnter the Information of %d Teachers",i+1);
		printf("\nEnter the ID : ");
		scanf("%d",&t[i].tid);
		__fpurge(stdin);
		printf("Enter the Gender : ");
		scanf("%c",&t[i].gen);
		
		printf("\n[1] Subject Code \t(or)\t [2] Subject Name ::");
		scanf("%d",&temp);

		if(temp==1)
		{	printf("Enter the Subject Code : ");
			scanf("%d",&t[i].sub[i].ssid);
		}
		else
		{	printf("\nEnter the Subject Name : ");
			__fpurge(stdin);
			scanf("%[^\n]%*c",t[i].sub[i].ssname);
		}
		
	}

	printf("\nStudents Info : \n");
	for(int i=0 ; i<num1 ; i++)
	{
		printf("\nID : %d",s[i].id);
		printf("\nGender : %c",s[i].gen);
		printf("\nStandard : %d",s[i].std);
		printf("\nJoining : %d / %d",s[i].ds[i].month, s[i].ds[i].year);
	}
	
	printf("\n\nTeachers Info :\n");
	for(int i=0 ; i<num2 ; i++)
	{
		printf("\nID : %d",t[i].tid);
		printf("\nGender : %c",t[i].gen);
		printf("\nSubject : %d (or) %s\n", t[i].sub[i].ssid, t[i].sub[i].ssname);
	}
		



}




















