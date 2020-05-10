#include <stdio.h>

int main()
{
	int m[5];
	float avg;
	printf("Enter the marks of five subjects : ");
	scanf("%d %d %d %d %d",&m[0],&m[1],&m[2],&m[3],&m[4]);
	avg = (float) (m[0] + m[1] + m[2] + m[3] + m[4])/5;
	printf("%d %d %d %d %d",m[0],m[1],m[2],m[3],m[4]);
	printf("\n %f", avg);
	return 0;
}
