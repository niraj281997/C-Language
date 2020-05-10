#include<stdio.h>

struct {
	int a;
	char ch;
	float ff;
}anon1;

typedef struct AnonymousStructure {         //Creating the Anonymous Structure
	int x;
	char y;
	float z;
}AS;

int main()
{
	printf("\nEnter integer : ");
	scanf("%d",&anon1.a);
	printf("\nEnter character : ");
	__fpurge(stdin);
	scanf("%c",&anon1.ch);
	printf("\nEnter float : ");
	scanf("%f",&anon1.ff);

	AS a1;                              //Creating an Object of Anonymous structure

	printf("\nEnter integer : ");
	scanf("%d",&a1.x);
	printf("\nEnter character : ");
	__fpurge(stdin);
	scanf("%c",&a1.y);
	printf("\nEnter float : ");
	scanf("%f",&a1.z);

	printf("\n1st Anonymous Structure\n");
	printf("\nInteger - %d Character - %c Float - %f\n",anon1.a,anon1.ch,anon1.ff);
		
	printf("\n2nd Anonymous Structure\n");
	printf("\nInteger - %d Character - %c Float - %f\n",a1.x,a1.y,a1.z);
	
}
	
