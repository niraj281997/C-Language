#include<stdio.h>

inc1(int *);
f(int);
f2(int *);
inc2(int **);
int main(){
	// pass by add -- passing add of var
	// pass by val -- passing box val of var
	int arr[5]={10,20,30,40,50};
	int x=10;
	f(x); // pass by val
	int *p;
	p=arr;
	inc1(p); // pass by val
	f2(&x); // pass by add
	inc2(&p);; // pass by add
}
void inc2(int **q){
	++(*q); // *q=*q+1;
}
void f2(int *a){
	++(*a);
}
int * inc1(int *t){
	++t;
}
int f(int y){
	++y;
}
