#include<stdio.h>

int main(){
	int x=0x11223344;
	char *cp=(char *)&x;

	printf("%x\n", *cp); // 44
	++cp;  // cp=cp+1;
	printf("%x\n", *cp); // 33
	++cp;
	printf("%x\n", *cp); // 22
	++cp;
	printf("%x\n", *cp); // 11

	int *p=&x;
	printf("%x\n", *p); // 4 bytes
	printf("%x\n", *(char *)p); // 1 byte




}
