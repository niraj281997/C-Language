#include<stdio.h>



int main(){
	int arr[5]={10,20,30,40,50};

	int *p;
	p=arr;

	printf("p =%u\n", p); //1000
	printf("p+1 =%u\n", p+1); //1004

	printf("*p=%u\n", *p);// 10
	printf("*p=%u\n", *(p+0));// 10
	printf("*p=%u\n", *(p+1));// 20
	printf("*p=%u\n", (*p+1));// 11

	for(int i=0;i<5;i++){
		printf(" %d",*(p+i));
	}
	printf("\n");

	for(int i=0;i<5;i++){
		printf(" %u",(p+i));
	}
	printf("\n");


	

}
