#include<stdio.h>
#include<string.h>

int main(){
	char name[]="abcdefg";
	char *cp;
	cp=name;
	printf("%s\n", cp); // abcdefg
	printf("%c\n", *cp);  // a

	printf("%c\n", cp[2]);
	printf("%c\n", *(cp+2));

	for(int i=0;i<7;i++){
		printf("%c ", cp[i]);
	}
	printf("\n");
	
	for(int i=0;i<strlen(cp);i++){
		printf("%c ", cp[i]);
	}
	printf("\n");
	
	for(int i=0; cp[i]!='\0';i++){
		printf("%c ", cp[i]);
	}
	printf("\n");
		

}
