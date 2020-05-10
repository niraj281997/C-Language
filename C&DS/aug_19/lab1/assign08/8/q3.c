#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
void main()
{
	char str1[10], str2[10];
	
	printf("Enter the string\n");
	scanf("%s",str1);
	
	strcpy(str2,str1);
	printf("The copied string is\n");
	scanf("%s",str2);
	
	char str3[15]="Anu";
	char str4[15]="rag";
	printf("The third  string is\n");
	puts(str3);
	printf("The fourth  string is\n");
	puts(str4);
	strcat(str3,str4);
	printf("The concatinated string is\n");
	puts(str3);

	char str5[10],str6[10];
	printf("The fifth string is\n");
	gets(str5);
	printf("The sixth string is\n");
	gets(str6);
	printf("After compare 4 char\n");
	if((strncmp(str5,str6,4))==0)	
		printf("Same\n");
	else
		printf("Not same\n");
	

	printf("After strcasecmp\n");
	if(strcasecmp(str5,str6)==0)	
		printf("Same\n");
	else
		printf("Not same\n");
	

	printf("After strncasecmp\n");
	if(strncasecmp(str5,str6,4)==0)	
		printf("Same\n");
	else
		printf("Not same\n");

	char str7[10];
	char n,*p;
	printf("Enter the seventh string\n");
	scanf("%s",str7);
	printf("Enter the character to search\n");
	scanf("%c",&n);
	printf("After strchr\n");
	p=strchr(str7,n);
	printf("%s\n",p);
	
	printf("After strrchr\n");
	p=strrchr(str7,n);
	printf("%s\n",p);

	char str8[20],str9[10];
	char *q;
	getchar();
	printf("Enter the eight string\n");
	gets(str8);
	printf("Enter the substring to search\n");
	gets(str9);
	printf("After strstr\n");
	q=strstr(str8,str9);
	printf("%s\n",q);

	char str11[]="I?am!the;fastest,man alive";
	char str10[]="?,!;";
	char *y;
	y=strtok(str11,str10);
	printf("%s",y);
}



