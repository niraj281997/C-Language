#include<stdio.h>
#include<string.h>

int main(){
	char name[]="abcdefg";
	
	printf("%s\n", name); // abcdefg
	printf("%c\n", *name);  // a

	printf("%c\n", name[2]);
	printf("%c\n", *(name+2));

	for(int i=0;i<7;i++){
		printf("%c ", name[i]);
	}
	printf("\n");
	
	for(int i=0;i<strlen(name);i++){
		printf("%c ", name[i]);
	}
	printf("\n");
	
	for(int i=0; name[i]!='\0';i++){
		printf("%c ", name[i]);
	}
	printf("\n");
		

}
