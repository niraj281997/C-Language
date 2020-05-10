#include<stdio.h>

float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);

void main(){

	float  ans,a,b;
	printf("Enter two number:");
	scanf("%f%f",&a,&b);

	int choice;
	printf("What would you like to do with this numbers ?\nAddition 1\nSubtract 2\nMultiply 3\nDivision 4\n");
	scanf("%d",&choice);

	switch (choice)
	{
	
	case 1:
		{
		ans=add(a,b);
	break;
		}
	
	case 2:
		{
		ans=sub(a,b);
		break;
		}
	
	case 3:
		{	
		ans=mul(a,b);
		break;
		}
	
	case 4:
		{	
		ans=div(a,b);
		break;
		}
	
	default:
		{	
		printf("You entered wrong choice");
		break;
		}
	}

	printf("Your answer is %f ",ans);
}

float add(float a,float b)
{
	return (a+b);
}
 
float sub(float a,float b)
{	
	return (a-b);
}

float mul(float a,float b)
{
	return (a*b);
}
 
float div(float a,float b)
{
	 return (a/b);
}
