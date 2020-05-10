#include<stdio.h>
#include<string.h>

int main(){
	char name[]="abc";
	char *cp;
	cp=name;
		
	printf("name len=%d\n", strlen(name)); // 3
	printf("cp len=%d\n", strlen(cp)); // 3

	printf("name len=%d\n", sizeof(name)); // 4
	printf("cp len=%d\n", sizeof(cp)); // 8

}
