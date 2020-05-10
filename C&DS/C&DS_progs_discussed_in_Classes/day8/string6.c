#include<stdio.h>
#include<string.h>

int main(){
	char src[]="abc";
	char dest[10];
	
	char *buff;
	buff=strcpy(dest, src);
	puts(dest);
	puts(src);
	puts(buff);
		

}
