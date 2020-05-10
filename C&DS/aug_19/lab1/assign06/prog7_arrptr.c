#include<stdio.h>
void main()
{
	unsigned int arr[5]={11,22,33,44,55};
	unsigned int (*parr)[5];
	parr=&arr;
	printf("Sizeof(parr):%u\n",sizeof(parr));	//8

	printf("Sizeof(*parr):%u\n",sizeof(*parr));	//20

	printf("Sizeof(**parr):%u\n",sizeof(**parr));	//4

	printf("Sizeof(arr):%u\n",sizeof(arr));		//20


	printf("**parr+0	a[0]:%u\n",**parr+0);
	printf("*parr[1]	a[1]:%u\n",(*parr)[1]); 		//
	printf("*(*parr+2)	a[2]:%u\n",parr[0][2]);
	printf("3[arr]		a[3]:%u\n",3[arr]);
	printf("4[*parr]	a[4]:%u\n",4[*parr]);

}
