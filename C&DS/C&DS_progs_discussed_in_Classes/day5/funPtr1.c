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
	printf("add of fun1=%u\n", fun1);
	printf("add of fun2=%u\n", fun2);
	printf("add of main=%u\n", main);

}
