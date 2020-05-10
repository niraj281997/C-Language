#include<stdio.h>
int main(){

	int k,y,p,temp;
	
	printf("Enter the integer k= ");
	scanf("%d",&k);
	temp=k;
	printf("++k=%d\n",++k);
	k=temp;
	printf("k++=%d\n",k++);
	
	printf("Enter the integer x= ");
	scanf("%d",&y);
	temp=y;
	printf("y=x++*10=%d\n",y++*10);
	y=temp;
	printf("y=++x*10=%d\n",++y*10);
	
	printf("Enter the integer p= ");
	scanf("%d",&p);
	temp=p;
	printf("q=p--/3=%d\n",p--/3);
	p=temp;
	printf("q=--p/3=%d\n",--p/3);
	
}
