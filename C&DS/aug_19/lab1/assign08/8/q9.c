
#include<stdio.h> 
#include<string.h>
int main(int argc,int* argv[]) 
{ 
	int counter,sum=0,avg,arr[10],val; 
	printf("Program Name Is: %s",argv[0]); 
	if(argc==1) 
		printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
	if(argc>=2) 
	{ 
		printf("\nNumber Of Arguments Passed: %d",argc); 
		printf("\n----Following Are The Command Line Arguments Passed----"); 
		for(counter=0;counter<argc;counter++) 
		{
			printf("\nargv[%d]: %s",counter,argv[counter]); 
			
			if (counter>=1)
			{
				val=atoi(argv[counter]);
				sum=sum+val; 
			}	
		}
	}
       printf("\n");

printf("\n Sum of arguments is %d ",sum);

printf("\n Avg of arguments is %d \n",sum/(argc-1));
	return 0; 
} 

