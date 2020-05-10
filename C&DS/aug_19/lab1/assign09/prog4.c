/*
Creating an employee structure.
Finding Average, Max, Min salary.
Finding the employees with maximum and minimum service.
*/


#include<stdio.h>

struct employee{
	int emid;
	char name[20];
	float sal;
	int yr;
};

struct employee *maxservice(struct employee a[3]);
struct employee *minservice(struct employee a[3]);

int main(){
	int i;
	struct employee e[3];
	float sum=0,max=0;
	struct employee *ptr1, *ptr2;
			
	for(i=0;i<3;i++)
	{
		printf("\nEnter the Employee Id : ");
		scanf("%d",&e[i].emid);
		printf("Enter the name : ");
		scanf("%s",e[i].name);
		printf("Enter your salary : ");
		scanf("%f",&e[i].sal);
		printf("Enter the year of joining : ");
		scanf("%d",&e[i].yr);
	}

	float min=e[0].sal;
	for(i=0;i<3;i++)
	{
		if(e[i].sal >= max){
			max=e[i].sal;
		}
	
		if(e[i].sal <= min){
			min=e[i].sal;
		}
		sum+=e[i].sal;

	}	

	printf("\n\nThe maximum salary is %f and the minimum salary is %f while the average salary is %f\n",max,min,(sum/3)); 

	ptr1 = maxservice(e);
	ptr2 = minservice(e);


	printf("The maximum Year of service is of %s with years of working %d. ", ptr2->name,(2019-(ptr2->yr)) ); 
	printf("The minimum Year of service is of %s with years of working %d. ", ptr1->name,(2019-(ptr1->yr)) ); 
}

struct employee *maxservice(struct employee a[3])
{
	int maxyr=a[0].yr,j;
	struct employee *x1;
	for(int i=0 ; i<3 ; i++)
	{
		if(maxyr<=a[i].yr)
		{	maxyr = a[i].yr;
			j=i;
		}
	}
	x1=&a[j];
	return x1;
}

struct employee *minservice(struct employee a[3])
{
	int minyr=a[0].yr,j;
	struct employee *x1;
	for(int i=0 ; i<3 ; i++)
	{
		if(minyr>=a[i].yr)
		{	minyr = a[i].yr;
			j=i;
		}
	}
	x1=&a[j];
	return x1;
}

