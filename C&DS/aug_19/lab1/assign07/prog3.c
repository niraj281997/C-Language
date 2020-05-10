#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int glo=5;
void main()
{
	int i,num;
	printf("Enter the number ");
	scanf("%d",&num);
	int temp,aa,bb,cc;
	aa = abs(num);
	bb = pow(2,glo);
	cc = sqrt(bb);
	//temp = sqrt(pow(2,abs(num)));     //Error
	printf("%d\n%d\n%d",aa,bb,cc);
		
}
