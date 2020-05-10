#include<stdio.h>

int main(){
	char a[10];
	char arr[10];
	//char buff[10];
	char *buff;
	buff=a;
	printf("enter a string\n");
	gets(arr);
	puts(arr);
	
	printf("enter a string\n");
	buff=gets(arr);
	puts(arr);
	puts(buff);
}
