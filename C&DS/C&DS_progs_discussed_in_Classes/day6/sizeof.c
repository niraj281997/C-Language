#include<stdio.h>

int main(){

	int x=10;
	int *p;
	p=&x;
	char ch='a';
	char *cp;
	cp=&ch;
	int arr1[3][2];
	char name[10];
	int arr[5];
	printf("%d\n", sizeof(arr)); // 20
	printf("%d\n", sizeof(name)); // 10
	printf("%d\n", sizeof(arr1)); // 24
	printf("%d\n", sizeof(++x)); // 4
	printf("%d\n", x); // 
	printf("%d\n", sizeof(p)); // 8 
	printf("%d\n", sizeof(*p)); // 4
	printf("%d\n", sizeof(cp)); // 8 
	printf("%d\n", sizeof(*cp)); // 1



}
