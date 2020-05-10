#include<stdio.h>
#include <stdio_ext.h>
void main()
{
	char ch[50], a[50], b[50],c[50];
	
	printf("\nEnter The 1st string : ");
	scanf("%s",a);
	printf("\nEnter The 2nd string : ");
	scanf("%s",b);
	int size;

	size=sprintf(ch,"%s%s",a,b);			// Concatinating 2 Strings and calculating the total size.
	__fpurge(stdin);
	
	printf("Lenght of concatenated string %d\n",size);
	printf("String a %s\n",a);
	printf("String b %s\n",b);
	sprintf(b,"%s",a);				// Copying the 1st string(a) to 3rd string(c)
	printf("String a copied to string b %s\n",b);
	printf("Concatenated string %s\n",ch);
}
