#include<stdio.h>

int *fun1(void);

int main(){
	int *p;
	p=fun1();
	printf("*p=%u\n", *p); // 10
	printf("*p=%u\n", *(p+1)); // 20

}
int *fun1(void){
	static int arr[5]={10,20,30,40,50};
	return arr;
}
