#include<stdio.h>
#include<string.h>
struct A
{
	int x;
	char *str;
};

struct B
{
	int y;
	char str2[20]; 
};

int main(){

	struct A a1 = { 101, "abc" } , a2;
	a1.x=10;
	a1.str="hello";				/*works? Yes this line will work as when the pointer has no memory assignes to the pointer then it stores the String in NEW random
       						Location in the string literal pool*/
	
	printf("Enter x and str");
//	scanf("%d%s",&a1.x,a1.str);		//works? No this line wont work as we can not modify the value at the String Literal Pool 
	printf("\nx=%d \t str=%s\n",a1.x,a1.str);
	a2 = a1;				 //shallow copy or deep copy?


	struct B b1 = { 101, "abc" } , b2;

	b1.y=10;
//	b1.str2="hello";			 //works? no this wont work as we can not assign a string to the array 
	printf("Enter y and str2");
	scanf("%d%s",&b1.y,b1.str2);		 //works? yes because we cant assign string to the array location
	printf("\ny=%d \t str2=%s\n",b1.y,b1.str2);
	b2 = b1;			//shallow copy or deep copy? 
	printf("address of b1 %u and address of b2 %u",&b1,&b2);
	
	int z=22,x=33;
	
	printf("\nBFORE address of a %u and address of b %u\n",&z,&x);
	z=x;
	printf("AFTER  address of a %u and address of b %u",&z,&x);

}
