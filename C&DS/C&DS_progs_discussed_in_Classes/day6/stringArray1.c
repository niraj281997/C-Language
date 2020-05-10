#include<stdio.h>

int main(){
	char name[]="acts";

	for(int i=0;i<5;i++){
		printf("%c ", name[i]);
	}
	printf("\n");
	
	for(int i=0;i<5;i++){
		printf("%u ", &name[i]);
	}
	printf("\n");

	printf("%u\n", name);// 1000
	printf("%u\n", name+1);// 1001

	printf("%c\n", *name);// 1000

	//name[0]='A';

	*name='A';
	printf("%c\n", *name);// 1000


}
