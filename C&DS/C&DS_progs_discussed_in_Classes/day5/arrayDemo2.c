#include<stdio.h>



int main(){
	int arr[5]={10,20,30,40,50};

	int *p;
	
	printf("%u %u", arr, arr+1);// 1000, 1004
	printf("%u %u", &arr, &arr+1);//1000,1020

	// diff b/w arr and &arr
	// arr points to 1st ele of array
	// &arr points to entire array
	//
	// scope of arr is only one ele
	// scope of &arr is entire array

	// int ptr: 4 byte jump & 4 bytes retrival	 // char ptr: 1 byte jump & 1 byte retrival
	// double ptr: 8 bytes jump & 8 bytes retrival
	
	


	for(int i=0; i<5 ;i++){
	//	printf(" %d", arr[i]);
	}
	printf("\n");

	
	

}
