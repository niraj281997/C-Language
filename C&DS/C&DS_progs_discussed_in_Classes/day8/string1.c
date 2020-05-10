#include<stdio.h>

int main(){
	char name[]="abcdefg";
	char *cp;
	cp=name;
	printf("name= %s\n", name);
	printf("name= %s\n", cp);

	printf("name= %c\n", name); // wrong
	printf("name= %c\n", cp);  // w

	printf("name= %c\n", *name);
	printf("name= %c\n", *cp);
	 
	printf("name= %s\n", *name); // w
	printf("name= %s\n", *cp);  // w
}
