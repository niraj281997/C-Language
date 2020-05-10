/*memcpy */

#include<stdio.h>
#include<string.h>

int main(){
	char a[]="Apoorv";
	char b[]="Anurag";
	int len=strlen(b);
	printf("\nString 1 before memcpy : %s",a);
	printf("\nString 2 before memcpy : %s",b);
	memcpy(a,b,len);

	printf("\nString 1 after memcpy : %s",a);
	printf("\nString 2 after memcpy : %s",b);

}

