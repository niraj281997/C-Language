#include<stdio.h>

// how to write fun
// 1. fun declartion
// 2. fun defination
// 3. fun call
//

int add(int, int);

int main(){
	int a=10,b=20;
	int c;
	c=add(a,b);// c=add(10,20);
	printf("in main res of add=%d", c);
}
