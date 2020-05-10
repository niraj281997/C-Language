#include<stdio.h>

void fun1(int []);
void fun2(int *);

int main(){
	int arr[5]={10,20,30,40,50};
	fun1(arr);
	fun2(arr);
}
void fun2(int *p){
	for(int i=0;i<5;i++){
		printf("%d ", p[i]); // *(p+i)
	}
	printf("\n");
}
void fun1(int a[]){
	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

