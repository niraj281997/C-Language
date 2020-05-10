#include<stdio.h>
#include<string.h>

int main(){
	char name[20];
	
	char *cp="123";
	
	//name=cp;
	
	strcpy(name,cp);
	puts(name);
	puts(cp);	

}
