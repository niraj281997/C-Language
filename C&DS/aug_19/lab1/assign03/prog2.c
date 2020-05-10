#include<stdio.h>

void main()
{
	int a, b;
	a = 5;
	b = 6;
	printf("\n a = %d ; b = %d", a, b);
	swap1(a,b);
	swap2(a,b);
	swap3(a,b);
}

void swap1(int x, int y) 		//with temporary
{
	int temp;
	temp = x;
        x = y;
	y = temp;	
	printf("\n WITH TEMPORARY \n\n a = %d ; b = %d", x, y);
}

void swap2(int x, int y)		//without temporary
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n WITHOUT TEMPORARY \n\n a = %d ; b = %d ", x, y);
}

void swap3(int x, int y)		//XOR operator
{
	x = (x^y) , y = (x^y) , x = (x^y);
	printf("\n\n WITH XOR OPERATOR \n\n a = %d ; b = %d \n\n  ",x, y);

}

