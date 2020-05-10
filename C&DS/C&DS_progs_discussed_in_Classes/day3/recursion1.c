#include<stdio.h>
int count=0;
int fun();
int main(){
	printf("in main fun \n");
	fun();

}

int fun(){
	int arr[1000000]={0};
	int i=0;
	int x=10;
	double a=1.0,b=2.0,c=3.0,d=4.0;
	printf("in fun fun() with count=%d\n", ++count);
	fun();
}
