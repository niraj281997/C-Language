#include<stdio.h>

int *rev(int *);
void main()
{
	int dec;
	static int a[18];
	printf("\n Enter the Decimal Number : ");
	scanf("%d", &dec);
	int temp = dec;
	for(int i=0; temp!=0 ; i++)
	{
		a[i] = temp%2;
		temp /= 2;
	}
	int (*rr)[18];
	rr = rev(a);	

	for(int i=0 ; i<18 ; i++)
		printf("%d",(*rr)[i]);
	printf("\n\n");
}	

int *rev(int *a)
{
	static int r[18];
	for(int i=0 ; i<18 ; i++)
	{
		r[i] = a[17-i];
	}
	return r;

}




