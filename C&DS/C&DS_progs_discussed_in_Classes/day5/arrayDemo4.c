#include<stdio.h>

int main(){
	int arr[5]={10,20,30,40,50};

	int *p;
	p=arr;
	printf("%u\n", arr[0]);
	printf("%u\n", *(arr+0));
	printf("%u\n", *(0+arr));
	printf("%u\n", 0[arr]);
	printf("-----------------\n");
	printf("%u\n", *(p+0));
	printf("%u\n", p[0]);
	printf("%u\n", *(0+p));
	printf("%u\n", 0[p]);
	

	

}
