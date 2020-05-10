#include<stdio.h>

int main(){
	char ch;
	ch='a';
	char *cp;
	cp=&ch;

	printf("size of char=%d\n",sizeof(ch)); // 1
	printf("size of char *=%d\n",sizeof(cp)); // 8 

	printf("add of ch =%u\n", &ch);  // 3000
	printf("add of cp =%u\n", &cp); // 4000

	printf("ch=%d\n", ch); // 97
	printf("ch=%c\n", ch); // a

	printf("cp=%u\n", cp); // 3000

	printf("*cp=%u\n", *cp);/// 

	printf("cp+1=%u\n", cp+1); // 3001

	int x=10;
	int *p;
	p=&x;
	printf("p=%u\n", p); // 1000
	printf("p+1=%u\n", p+1); // 1004
	



}
