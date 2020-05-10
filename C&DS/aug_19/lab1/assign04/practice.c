#include <stdio.h>
#include <stdlib.h>
void reverse(char a[],int n,int i)
{
	//printf("hello");
if(i==-1)
	return  ;
//printf("1");
 putc(*(a+i),stdout);
reverse (a,n,--i);

}
int main()
{

int n,i=0;
printf("size : ");
scanf("%d",&n);
printf("\n");
char *a=calloc(n,sizeof(char));
while(i<=n)
	*(a+i++)=getc(stdin);
i=n;
//while(i<=n)
//	putc(*(a+i++),stdout);
reverse(a,n,i);



}
