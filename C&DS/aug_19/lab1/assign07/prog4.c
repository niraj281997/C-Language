#include<stdio.h>

void swap(int , int);
void passbyadd(int* ,int *);
int main(){
	int x,y;
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	passbyadd(&x,&y);
	printf("the swapped numbers using call by address are %d %d \n",x,y);
	
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	swap(x,y);

}

void passbyadd(int *a ,int* b)          //Pass by Address
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void swap(int num1, int num2)           //Pass by Value
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("the swapped numberd using call by value are  %d %d\n\n", num1, num2);
}
