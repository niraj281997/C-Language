#include<stdio.h>

int main(){
	
	int arr[5]={10,20,30,40,50};

	int *q=(int *)malloc(sizeof(int)*5);
	*(q+0)=11;
	*(q+1)=22;

	q[0]=11;
	q[1]=22;
}
