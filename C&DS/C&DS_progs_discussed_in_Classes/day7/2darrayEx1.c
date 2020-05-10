#include<stdio.h>

void fun1(int [][3]);

void fun2(int (*)[3]);
int main(){

	int arr[2][3]={{10,20,30},{40,50,60}};
	fun1(arr);
	fun2(arr);
}
void fun2(int (*p)[3]){
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
void fun1(int x[][3]){
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
