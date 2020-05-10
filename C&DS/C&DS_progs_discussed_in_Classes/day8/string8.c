#include<stdio.h>
#include<string.h>

int mystrlen(const char *);

int main(){
	char name[20];
	char *cp="abcdefg";
	//name=cp
	strcpy(name,cp);
	puts(name);
	puts(cp);	
	printf("name len=%d\n", mystrlen(name));// 3
	printf("name len=%d\n", mystrlen(cp)); // 3
}
int mystrlen(const char *s){
	int count=0;
	while(*s!='\0'){
		++count;
		++s;
	}
	return count;
}
