#include<stdio.h>
void main(){
	int a,b;

	printf("Enter two numbers :  ");
	
	scanf("%d %d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;

	printf("First number is %d and second number is %d\n ",a,b);
	
}
