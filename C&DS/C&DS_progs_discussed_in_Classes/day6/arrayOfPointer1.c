#include<stdio.h>

int main(){
	int *arr1[3];

	int x=10, y=20, z=30;

	arr1[0]=&x;
	arr1[1]=&y;
	arr1[2]=&z;

	int *arr2[3]={&x, &y, &z};

	printf("%u\n", arr1[0]); // 1000
	printf("%u\n", *(arr1[0])); // 10

}
