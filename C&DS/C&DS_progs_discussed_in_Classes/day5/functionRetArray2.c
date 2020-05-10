#include<stdio.h>

int (*fun1(void))[5];

int main(){
	int (*p)[5];
	p=fun1();
	printf("*p=%u\n", p[0][0]); // 10
	printf("*p=%u\n", p[0][1]); // 20

}
int (*fun1(void))[5]{
	static int arr[5]={10,20,30,40,50};
	return &arr;
}
