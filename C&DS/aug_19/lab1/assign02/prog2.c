#include<stdio.h>
void main()
{
	int age, tax;
	long int sal;
        int  gen;
	float finalsal;

	printf("\n Enter the Age : ");
	scanf("%d",&age);
	printf("\n Gender \nMale 1\nFemale 2\t : ");
	scanf("%d",&gen);
	printf("\n Enter the Salary : ");
	scanf("%ld",&sal);

	if (age<60)
	{
		if (gen==1)
		{
			if( sal>=1000000 )
				tax = 30;
			else
			{      	if(( sal>=500000 ) && (sal<1000000))
				tax = 20;
			 	else
				tax = 0;
			}
		}
		else
		{	
			if( sal>=1000000 )
				tax = 25;
			else
			{
				if(( sal>=500000 ) && (sal<1000000))
				tax = 15;
				else
				tax = 0;
			}
		}
	}
	else
	{
		if (gen==1)
		{
			if( sal>=1000000 )
				tax = 5;
			else
			{      	if(( sal>=500000 ) && (sal<1000000))
				tax = 2;
			 	else
				tax = 0;
			}
		}
		else
		{	
			if( sal>=1000000 )
				tax = 2.5;
			else
			{
				if(( sal>=500000 ) && (sal<1000000))
				tax = 1;
				else
				tax = 0;
			}
		}
	}
	printf("\n Total Income Tax : %ld ", ((sal*tax)/100));

}
