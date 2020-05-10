#include<stdio.h>
int GCD( int, int);
int LCM(int, int, int);
void main()
{
	int a,b;
	printf("\n Enter the 1st and 2nd Number : ");
	scanf("%d %d", &a, &b);
	int g, l;
	
	g=GCD(a,b);
	printf("\n GCD : %d ", g);
	
	l=LCM(a,b,g);
	printf("\n LCM : %d ", l);
} 

int GCD(int a, int b)
{
        int temp = a/2;
        for( int i=temp; i>0 ; temp-- )
        {       if ( (a%temp==0) && (b%temp==0) )
                {
                        return temp;
                }
        }
}

int LCM(int a, int b, int g)
{
	return ((a*b)/g);
}
