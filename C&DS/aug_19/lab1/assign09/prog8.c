#include<stdio.h>

union A
{
	int x;
	short int y;
	char ch;
};

int main()
{
	union A a1;
	a1.x=0x11223344;
       	printf("\na1.x = %x a1.y = %x a1.ch = %x\n", a1.x, a1.y, a1.ch);
	printf("\nSize of Union : %u ", sizeof(union A));
	printf("\nAddress of Union : %u ", &a1);
	
	/*printf("\nOffset of x : %zu ", offsetof(union A a1 , x));		//Cannot define the offset of a Union
	printf("\nOffset of y : %zu ", offsetof(union A a1, y));
	printf("\nOffset of ch : %zu ", offsetof(union A a1, ch));
	*/
}
