#include<stdio.h>

int *fun1(void);

int main(){
	int *p;
	p=fun1();
	printf("add = %u\n", p);
	printf("val = %u\n", *p);
}

int *fun1(){
	static int temp=10;
	return &temp;
}
