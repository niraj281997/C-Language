#include<stdio.h>
#include<stdio_ext.h>

int main(){
	char ch;
	char name[10];

	scanf("%s", name);
	//getchar();
	__fpurge(stdin);
	scanf("%c", &ch);

	printf("%s\n", name);
	printf("%c\n", ch);
		


}
