#include<stdio.h>

float (*fun1())(int *);
float fun2(int *);

int main(){
	float (*fptr)(int *);
	fptr=fun1();
	printf("fun2=%u\n", fun2);
	printf("fptr=%u\n", fptr);
	int x=10;
	float y,z;
	y=fptr(&x);
	z=fun2(&x);

}
float (*fun1())(int *){
	printf("in fun1\n");
	return fun2;
}
float fun2(int *p){
	printf("in fun2\n");

}


