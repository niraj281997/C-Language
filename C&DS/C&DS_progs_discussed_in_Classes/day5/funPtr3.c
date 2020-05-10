#include<stdio.h>

void fun1(void){
	printf("in fun1() \n");
}
void fun2(int a){
	printf("in fun2() \n");
}
int main(){
	void (*fptr1)();
	fptr1=&fun1;
	void (*fptr2)(int);
	fptr2=&fun2;
	int x=10;
	fptr1();
	fptr2(10);
}








