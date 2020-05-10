/*Niraj Gohel
 * gohelniraj1997@gmail.com
 *
 *
 *
 *
 *
 *
 *IPv4 address 127.0.0.1
 		197.127.28.125
		197.25.56.21
 *
 *
 *
 *
 * */
#include <stdio.h>
#include <string.h>
int main()
{
unsigned int n1=255;
char a[16],b[16];
int j=0;
int count=0;
printf("enter address ");
scanf("%s",a);
printf("\nEnted  address : %s \n",a);

for(int i=0;i<16;i++)
{	if(a[i]!='.')
		b[j++]=a[i];


}
 printf("\n Server address  %s \n",b);
printf("\n");

int number=0;
number=number*10+b[0]-'0';
number=number*10+b[1]-'0';
number=number*10+b[2]-'0';
if(number<=n1)
	count++;


 number=0;
number=number*10+b[3]-'0';
number=number*10+b[4]-'0';
number=number*10+b[5]-'0';
if(number<=n1)
	count++;


 number=0;
number=number*10+b[6]-'0';
number=number*10+b[7]-'0';
number=number*10+b[8]-'0';
if(number<=n1)
	count++;

 number=0;
 
number=number*10+b[9]-'0';
number=number*10+b[10]-'0';
number=number*10+b[11]-'0';
if(number<=n1)
	count++;

/*

for(int k=0;k<12;k++)					--> trying to reduce the space complexity
{	int number=0;
	int x=0;
	if(x<3)
	{
	
	number=number*10+b[0]-'0';
	x++;
	}
	if(x==3)
	{
		if(number<=255)
		{
			count++;
			x=0;
		}
	
	}



}
*/
printf("count %d",count);

if(count==4)
	printf("\n\nYES\n\n");
else
	printf("\n\nN0\n\n");

}
