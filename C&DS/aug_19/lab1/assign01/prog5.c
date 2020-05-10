#include<stdio.h>
void main(){
	int year;
	printf("Enter the year:" );
	scanf("%d",&year);
	if(year%4==0)
	{
		if((year%100==0)&&(year%400!=0) )
		{
			printf("Its not a leap year");
		}
		else{
			printf("Its a Leap Year");
		}
	}
	else
	printf("Its not a Leap Year");
}
