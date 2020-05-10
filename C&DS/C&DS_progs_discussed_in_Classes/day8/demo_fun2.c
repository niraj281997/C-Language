#include<stdio.h>

void inc1(int *);
void inc2(int *, int *);

int main(){
	int x=10;
	int y=20, z=30;
	inc2(&y,&z);
	printf("x=%d\n", x);
	inc1(&x);
	printf("x=%d\n", x);

}
void inc1(int *a){
	*a=*a+1;
}

void inc2(int *b, int *c){
	*b=*b+1;
	*c=*c+1;
}




