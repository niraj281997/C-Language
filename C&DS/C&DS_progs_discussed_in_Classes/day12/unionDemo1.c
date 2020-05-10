#include<stdio.h>

union demoU{
	int x;
	short int y;
	char z;
};

int main(){
	union demoU u1;
	u1.x=0x11223344;
	printf("u1.x=%x\n", u1.x);
	printf("u1.y=%x\n", u1.y);
	printf("u1.y=%x\n", u1.z);

    printf("size of =%d\n", sizeof(union demoU));
}
