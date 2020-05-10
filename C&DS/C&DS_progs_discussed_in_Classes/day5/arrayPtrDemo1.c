#include<stdio.h>

int main(){
	int arr[5]={10,20,30,40,50};
	int a[10];
	int (*aptr)[5]; // here aptr is array ptr
	int *p;  // here p is int ptr

	// here p can point to an ele of array
	// whereas aptr can point to entire array
	
	aptr=&arr;
	//aptr=&a;
	
	printf("aptr=%u\n",aptr);  // 1000
	printf("aptr=%u\n",aptr+1);  // 1020

	
	printf("aptr=%u\n", aptr); // add of array
	printf("*aptr=%u\n", *aptr);// add of ele
	printf("**aptr=%u\n", **aptr);// ele

	printf("1st ele add=%u\n",*aptr+0 );
	printf("2nd ele add=%u\n",*aptr+1 );

	printf("1st ele =%u\n", *(*aptr+0));
	printf("2nd ele =%u\n", *(*aptr+1));
	
	printf("1st ele =%u\n", (*aptr)[0]);
	printf("2nd ele =%u\n", (*aptr)[1]);


	printf("1st ele =%u\n",aptr[0][0]);
	printf("2nd ele =%u\n",aptr[0][1]);

	// level 1 - entire array(add)
	// level 2 - add of ele
	// level 3 - ele
	
}



