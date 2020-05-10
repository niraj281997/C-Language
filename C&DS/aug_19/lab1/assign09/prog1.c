#include<stdio.h>
#include<string.h>

typedef struct information 
{
	int idnum;
	char name[20];
	int age;
	char gen;
	float marks;
}info;

void main()
{
	struct information s;

	printf("\nEnter the information of Student");
	printf("\nEnter Id Number : ");
	scanf("%d",&s.idnum);
	printf("Enter Name : ");
	fscanf(stdin,"%s",s.name);
	printf("Enter Age : ");
	scanf("%d",&s.age);
	__fpurge(stdin);
	printf("Enter Gender (M/F) : ");
	scanf("%c",&s.gen);
	printf("Enter Marks : ");
	scanf("%f",&s.marks);

	struct information *A;
	A=&s;	
	
	printf("\nDISPLAYING INFORMATION\n");	
	printf("ID number : %d\n",A->idnum);	
	printf("Name  : %s\n",A->name);	
	printf("Age : %d\n",A->age);	
	printf("Marks : %f\n",A->marks);	
	printf("Gender : %c\n",A->gen);	
	
	printf("\n\nFinding the Size..!!\n ");
	printf("Size of Structure : %u\n",sizeof(s));
	printf("Size of ID Number : %u\n",sizeof(s.idnum));
	printf("Size of Name : %u\n",sizeof(s.name));
	printf("Size of Age: %u\n",sizeof(s.age));
	printf("Size of Gender : %u\n",sizeof(s.marks));
	printf("Size of Marks : %u\n",sizeof(s.marks));

	info OBJ1;
	info *obj2;
	obj2=&OBJ1;
	obj2->idnum = 100;
	strcpy(OBJ1.name,"APOORV");
	printf("\n\nID Number(Typedef) : %d\n",OBJ1.idnum);
	printf("Name(Typedef) : %s\n",obj2->name);


}




