#include<stdio.h>

void fun1(void){
	int x=10,y=20,z=30;
	int arr[10]={0};
	printf("in fun1() \n");
}
void fun2(int a){
	int x=10,y=20,z=30;
	printf("in fun2() \n");
}
int main(){
	void (*fptr1)();
	fptr1=&fun1;
	void (*fptr2)(int);
	fptr2=&fun2;

	fptr1();
	fptr2();
}








