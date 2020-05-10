#include<stdio.h>



int main(){
	int arr[5]={10,20,30,40,50};

	for(int i=0; i<5 ;i++){
		printf(" %d", arr[i]);
	}
	printf("\n");

	// in 1-D array, Array name it self is ptr
	// type of pointer ??
	// same type as array type
	// here arr is a ptr type of int
	// char name[]="cdac";
	// here name is a ptr type of char
	
	printf("arr=%u\n", arr); // 1000
	printf("arr[0]=%u\n", &arr[0]);// 1000
	printf("arr[4]=%u\n", &arr[4]);// 1016



	for(int i=0; i<5 ;i++){
		printf(" %u", &arr[i]);
	}
	printf("\n");

	arr[1]=22;


	for(int i=0; i<5 ;i++){
		printf("enter %d ele",i+1);
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<5 ;i++){
		printf(" %d", arr[i]);
	}
	printf("\n");




	
	
	
	

}
