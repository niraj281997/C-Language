#include<stdio.h>

int mystrlen(const char *);

void mystrcat(char *,const  char *);

int main(){
	char str1[10]="abc";
	char str2[]="123";
	puts(str1);
	mystrcat(str1,str2); // abc123;
	puts(str1);
}
void mystrcat(char *s1, const char *s2){
	while(*s1!='\0'){
		++s1;
	}
	while(*s2!='\0'){
		*s1=*s2;
		++s1;
		++s2;
	}
	*s1='\0';
}

void mystrcpy(char *d, const char *s){
	while(*s!='\0'){
		*d=*s;
		s++;
		d++;
	}
	*d='\0';
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






