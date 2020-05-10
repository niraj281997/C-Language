#include<stdio.h>

int main(){
	int x;
	x=10;
	int *p;

	printf("size of int=%d\n",sizeof(x)); 
	printf("size of int *=%d\n",sizeof(p)); 

	printf("add of x =%u\n", &x); 
	printf("add of p =%u\n", &p); 

	printf("add of &x+1 =%u\n", &x+1); 
	printf("add of &p+1 =%u\n", &p+1); 

}
