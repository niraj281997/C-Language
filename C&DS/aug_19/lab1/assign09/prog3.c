/*
Creating a Student structure.
Creating an array of struct variable (Name and Marks)
Finding marks of 'i'th student in 'j'th subject
Finding the student wise totals and subject wise totals.
*/

#include<stdio.h>
#include<string.h>

struct info 
{
	int idnum;
	char name[20];
	int age;
	char gen;
	float marks[5];
	float avg;
};

void main()
{
	int num;
	struct info s[5];
	printf("\nTotal Number of Students Number :\n");
	scanf("%d",&num);

	for(int i=0 ; i<num ; i++)
	{
		printf("Enter the information of Student\n");
		printf("Enter Id Number : ");
		scanf("%d",&s[i].idnum);
		printf("Enter Name : ");
		fscanf(stdin,"%s",s[i].name);
		printf("Enter Age : ");
		scanf("%d",&s[i].age);
		__fpurge(stdin);
		printf("Enter Gender (M/F) : ");
		scanf("%c",&s[i].gen);
		printf("\nEnter Marks of 5 Subjects :: ");
		for(int j=0 ; j<5 ; j++)
		{
			scanf("%f",&s[i].marks[j]);
		}
	}
	
	for(int i=0 ; i<num ; i++)
	{
		float temp=0;		
		for(int j=0 ; j<5 ; j++)
		{
			temp = temp + s[i].marks[j];
		}
		s[i].avg = temp/5;
	}

	printf("\nStudents Information\n\n");
	for(int i=0 ; i<num ; i++)
	{
		printf("\nID : %d",s[i].idnum);
		printf("\nName : %s",s[i].name);
		printf("\nAge : %d",s[i].age);
		printf("\nGender : %c",s[i].gen);
		for(int j=0 ; j<5 ; j++)
			printf("\nMarks in %d subject : %f", j+1, s[i].marks[j]);
		printf("\nAverage : %f\n",s[i].avg);
	}

	printf("\n\n");
	static float subtotal[5];
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<num ; j++)
		{	subtotal[i] += s[j].marks[i];
		}
		printf("Total in subject %d : %f\n",i,subtotal[i]);
	}

}
















