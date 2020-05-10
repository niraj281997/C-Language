#include <stdio.h>
void dun();
int a=20;
int main()
{
	int a[]={10,20,30};
	int *b=(&b+1);
	printf("%d",*b);
	//printf("%d",a);
	//dun();
	//printf("%d",a);
	
}	
void dun()
{
static int a=10;
printf("%d",a);




}
