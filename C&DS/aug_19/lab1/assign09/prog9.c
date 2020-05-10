#include<stdio.h>
#include<string.h>

union A
{
	int x;
	float y;
	double z;
	int arr[2];
};

union B
{
	int x;
	short int y;
	char ch;
	char carr[4];
};


int main()
{
	union A a1;
	union B b1;

	a1.y=6.25;
	//a1.z=0.15625;

	printf("a1.y - %f\n",a1.y);
	printf("a1.z - %f\n",a1.z);
	printf("a1.x - %d\n",a1.x);
	printf("a1.arr[1] - %x a1.arr[0] - %x\n",a1.arr[1],a1.arr[0]);
	
	b1.x=0x41424344;
	printf("b1.x - %x\n",b1.x);

	for(int i=0 ; i<4 ; i++)
	printf("b1.carr[%d] - %x\n",i,b1.carr[i]);

	b1.y=0x1111;
	printf("b1.y - %x\n",b1.y);
	printf("b1.x - %x\n",b1.x);

	b1.ch='a';
	printf("b1.ch - %c %x \n ",b1.ch, b1.ch);
	printf("b1.x - %x\n",b1.x);

}

