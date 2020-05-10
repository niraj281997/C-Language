#include<stdio.h> 
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7};
	printf("%ld %ld %ld %ld %ld %ld %ld",arr,arr+1,*(*(arr+1)+2),&arr,&arr+1,arr[0],arr[7]);
	
}

