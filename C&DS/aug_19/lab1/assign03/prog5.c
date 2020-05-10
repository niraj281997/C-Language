#include<stdio.h>
int second(int, int, int);
void main()
{
	int final,h, m, s, s1;
	int hh, mm,ss, x;

	printf("\n\n Select Format : \n\n 1. HH:MM:SS \n\n 2. SECONDS \t\t : ");
	scanf("%d",&x);
	switch (x) 
	{ case 1 :
			{	printf("\n Enter Hours : ");
				scanf("%d", &h);
				printf("\n Enter Minutes : ");
				scanf("%d", &m);
				printf("\n Enter Seconds : ");
				scanf("%d", &s);

				final = second(h, m, s);
				printf("\n\n Total number of seconds : %d ", final);
				break;
			}
	 case 2 :
			{ 	
				printf("\n Enter Seconds : ");
				scanf("%d", &s1);
				
				hh=s1/3600;
				s1=s1%3600;
				mm=s1/60;
				s1=s1%60;
				ss=s1;
		
				printf("\n The time is %d:%d:%d",hh,mm,ss);
				break;
			}	
	default:
			printf("Invalid input");
			break;

	}
}
int second(int x, int y, int z)
{
	int temp;
	 return temp=x*3600+y*60+z;
}







