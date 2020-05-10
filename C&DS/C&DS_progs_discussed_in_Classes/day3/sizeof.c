#include<stdio.h>

int main(){
	int x;
	x=10;
	int *p;

	printf("add of x =%u\n", &x); 
	printf("add of p =%u\n", &p); 

	printf(" x =%u\n", x); // 10 
	printf(" p =%u\n", p); // 1000

	printf("*p =%u\n", *p);

	// * here is an dereference op
	// & addressof op 
	

	printf("add of &x+1 =%u\n", &x+1); 
	printf("add of &p+1 =%u\n", &p+1); 

}
