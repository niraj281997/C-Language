#include<stdio.h>

int inc1(int);
int inc2(int, int);

int main(){
	int x=10;
	int y=20, z=30;
	inc2(y,z);
	printf("x=%d\n", x);
	x=inc1(x);
	printf("x=%d\n", x);

}
int inc1(int a){
	//printf("inc val is =%d\n", ++a);
	return ++a;
}

int inc2(int b, int c){
// we can return only one val for a func
//
// we can have two return statment, but it should be with some
// cond.

}




