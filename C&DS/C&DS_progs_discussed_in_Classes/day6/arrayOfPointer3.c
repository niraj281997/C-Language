#include<stdio.h>

char (* fun1(int **p))[5]{
	static char arr[5];
	return &arr;
}

int main(){
	char (*(*arr1[3])(int **))[5];

	arr1[0]=fun1;
	arr1[1]=fun1;
	arr1[2]=fun1;


}
