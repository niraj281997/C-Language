#include<stdio.h>

int count_leap(int, int);
int monthdays(int);
int leap(int);
void main()
{
	int date, year, month, day;
	int date1, year1, month1, day1;
	date = 1;
	month = 1;
	year = 1970;
	day = 1;
void retday(int);
	
	printf("Reference Date and Day - 1st January 1970:Thursday\n");
	
	printf("\n Enter the New details : ");
	printf("\n Enter the Year : ");
	scanf("%d",&year1);
	printf("\n Enter the Month : ");
	scanf("%d",&month1);
	printf("\n Enter the Date : ");
	scanf("%d",&date1);

	int days, count, days_odd, totaldays_y, extradays_y, totaldays_m, extradays_m;

	count = count_leap(year, year1);

	printf("Count = %d\n",count);

	//total number of (leap)days : count*2;
	
	days_odd = (year1-year)-count; 

	totaldays_y = days_odd + (count*2);

	printf("Toatal days = %d\n",totaldays_y);

	//extradays_y = totaldays_y % 7;				//1st Jan of year1 is (extradays_t) extra from THURSDAY.
	

	//if(leap(year1)==1)
		//totaldays_m = monthdays(month1)+1;
//	else 
		totaldays_m = monthdays(month1);
	printf("The total days month are %d ",totaldays_m);	
	//extradays_m = totaldays_m + day1
	int total;
	total = (totaldays_y + totaldays_m + date1 ) % 7;
	
	retday(total);
}

int leap(int year)
{
	if(year%4==0)
	{
		if((year%100==0)&&(year%400!=0) )
		{
			return 0;
		}
		else
			return 1;
	}
	else
	return 0;
}

int count_leap(int y1, int y2)
{
	int count=0;
	for(int i=y1 ; i<y2 ; i++)
		if (leap(i)==1)
			count++;
	return count;
}

int monthdays(int month)
{	
	int sum=0;
	int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for (int i=0;i<month;i++)
	{
		sum=sum+m[i];
	}
	printf("the total days in months are %d\n",sum);
	return sum;
}

void retday(int n)
{

	if(n==1)
		printf(" Sunday ");

	if(n==2)
		printf(" Monday ");

	if(n==3)
		printf(" Tuesday ");

	if(n==4)
		printf(" Wednesday ");
			
	if(n==5)
		printf(" Thursday ");

	if(n==6)
		printf(" Friday ");

	if(n==0)
		printf(" Saturday "); 
}



