#include<stdio.h>

void fun1(int [], int);
void fun2(int *, int);
int main(){
	int arr[5]={10,20,30,40,50};
	fun1(arr, 5);
	fun2(arr, 5);
	fun2(arr+1, 5);

}
void fun2(int *p, int size){
	for(int i=0;i<size;i++){
		printf("%d ", *(p+i));
	}
	printf("\n");
}
void fun1(int a[], int size){
	for(int i=0;i<size;i++){
		printf("%d ", a[i]);
	}
	printf("\n");

}
