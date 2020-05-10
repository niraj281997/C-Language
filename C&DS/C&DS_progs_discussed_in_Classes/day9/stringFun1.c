#include<stdio.h>

int mystrlen(const char *);

void mystrcpy(char *dest, const char *src);


int main(){
	int len;
	char name[]="abcdefg";
	len=mystrlen(name);
	printf("length=%d\n", len);
	char src[]="xyz";
	char dest[10];
	puts(dest);
	mystrcpy(dest, src);
	puts(dest);

}
int mystrlen(const char *p){
	int count=0;
	while(*p!='\0'){
		//*p='a';
		++count;
		p++;
	}
	return count;	
}






void mystrcpy(char *d, const char *s){
	while(*s!='\0'){
		*d=*s;
		s++;
		d++;
	}
	*d='\0';
}

