#include<stdio.h>

int main(){
	char buf[70];
	int len;
	char *fname;
	char *lname;
	char *homeadd;
	printf("enter first name\n");
	gets(buf);
	len=strlen(buf);
	fname=(char *)malloc(len+1);
	strcpy(fname,buf);
	printf("enter last name\n");
	gets(buf);
	len=strlen(buf);
	lname=(char *)malloc(len+1);
	strcpy(lname,buf);
	printf("enter home address\n");
	gets(buf);
	homeadd=(char *)malloc(strlen(buf)+1);
	strcpy(homeadd, buf);
	puts(fname);
	puts(lname);
	puts(homeadd);


}
