#include<stdio.h>

int main(){
	int *p;
	int x=10;
	p=&x;

	printf("%u\n", p);
	printf("%u\n", p+1);
	printf("%u\n", &p);
	printf("%u\n", &p+1);
}
