#include<stdio.h>

void main()
{
	int a[5] = {10,20,30,40,50};
	int *p=a;
	int *q=*(&a+1)-1;


	printf("\n *p=a : %u", *p);		//10
	printf("\n *q=*a(&a+1) %u", *q);	//50

	printf("\n *p++ : %u", *p++);		//10	
	printf("\n *++p : %u", *++p);		//30
	printf("\n (*p)++ : %u", (*p)++);	//30
	printf("\n ++(*p) : %u", ++(*p));	//32

	
	printf("\n ++*p : %u", ++*p);		//33
	printf("\n *(p++) : %u", *(p++));	//33
	printf("\n *(++p) : %u", *(++p));	//50

	
	printf("\n *q-- : %u", *q--);		//50
	printf("\n *--q : %u", *--q);		//33

	printf("\n --(*q) : %u", --(*q));	//32
	printf("\n --*q : %u", --*q);		//31
	
	printf("\n (*q)-- : %u", (*q)--);	//31
	printf("\n *(q--) : %u", *(q--));	//20
	printf("\n *(--q) : %u\n\n", *(--q));	//10
	
}
