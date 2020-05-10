#include<stdio.h>

int main(){

	int x=10;
	int *p;
	p=&x;
	int **q;

	q=&p;

	printf("%u", x); //10
	printf("%u", p); //1000
	printf("%u", q); //2000

	printf("%u", &x); // 1000
	printf("%u", &p); // 2000
	printf("%u", &q); // 3000

	printf("%u", *x); // error
	printf("%u", *p); // 10
	printf("%u", *q); // 1000

	printf("%u", **x); // error
	printf("%u", **p); // error
	printf("%u", **q); // 10

	printf("%u", ***q); // 10
	
	//printf("%u", *&q)
	printf("%u", *&x);
	

}
