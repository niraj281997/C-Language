#include<stdio.h>
void main(){
	int b,c,a;
	printf("Enter a three digit number :\n ");
	scanf("%d",&a);

	c=a%10;
	a=a/10;
	b=a%10;
	a=a/10;

	printf("The reversed number is %d%d%d\n\n",c,b,a);
	
	return 0;
}
