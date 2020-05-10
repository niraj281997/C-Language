#include<stdio.h>

int main(){
	int arr[5]={10,20,30,40,50};
	int *p;
	p=arr;
	printf("%u\n", p);   // 1000
	printf("%u\n", p+1);  // 1004
	printf("%u\n", arr);  // 1000
	printf("%u\n", arr+1); // 1004

	printf("%u\n", ++p);
	printf("%u\n", ++arr);

	int x=10;
	p=&x;
	arr=&x;
	int a[5];
	arr=a;

}
