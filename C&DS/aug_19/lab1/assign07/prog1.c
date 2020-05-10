#include<stdio.h>
int count1();
int count2();

int main(){
	printf("The function 'Count1' 1st Call %d  \n",count1());
	printf("The function 'Count2' 1st Call %d  \n",count2());

	printf("The function 'Count1' 2nd Call %d \n",count1());
	printf("The function 'Count2' 2nd Call %d \n",count2());

	printf("The function 'Count1' 3rd Call %d \n",count1());
	printf("The function 'Count2' 3rd Call %d \n",count2());

	printf("The function 'Count1' 4th Call %d \n",count1());
	printf("The function 'Count2' 4th Call %d \n",count2());
}

int count1()
{
	int a=0;
	a++;
	return a;
}

int count2()
{
	static int a=0;
	a++;
	return a;
}
