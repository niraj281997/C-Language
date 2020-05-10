#include<stdio.h>
int avg(int *,int n);
void main(){
	int mean, marks[10],n;
	printf("Enter the number of subjects ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){

		printf("Enter the marks of subject  %d  ",i+1);
		scanf("%d",&marks[i]);
	}

	printf("The grading system is as follow\n\ngrade\tmarks\nAA\t100-91\nAB\t90-81\nBB\t80-71\nBC\t70-60\nCC\t60-51\nCD\t50-41\nDD\t40-35\nFF\tBelow 35\n\n");

	 mean=avg(marks,n);
	if (mean>34)
        {		
        printf("Your grade is ");
        }

	if((mean<=100) && (mean>=91))
        {		
        printf("AA");	
		}
	else if((mean<=90) && (mean>=81))
        {		 
        printf("AB");	
        }
	else if((mean<=80) && (mean>=710))
        {		   
        printf("BB");	
		}
	else if((mean<=70) && (mean>=61))
	    {	
        printf("BC");	
		}
	else if((mean<=60) && (mean>=51))
        {		
        printf("CC");	
		}
	else if((mean<=50) && (mean>=41))
		{
        printf("CD");	
	    }	
	else if((mean<=40) && (mean>=35))
        {
		printf("DD");	
        }
    else 
		{
        printf("You are falied in Exam\nStudy well next time\n");	
		}
        printf("\n\n");
}

int avg(int *a,int n)
{
	int i=0;
	int sum=0;
	for(i;i<n;i++){
		sum+=a[i];
	}
	return sum/n;
}
