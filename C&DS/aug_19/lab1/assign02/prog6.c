#include<stdio.h>
void fi(int);
int main()
{
        int n;
        printf("Enter the Size : ");
        scanf("%d",&n);
	if(n==1)
	{
		printf("Series : %d ",n);
	}
	else
	{
        fi(n);
	}
}
void fi(int n)
{
        int s,a,b;
        int i=2;
        if (n<1)
        {
                printf("\n *******Index Out Of Range******* ");
        }
        else
        {
                a=1;
                b=1;
                printf("Series : %d %d ",a,b);
                for( i ; i<n ; i++)
                {
                        s = a + b;
                        printf("%d ", s);
			a=b;
			b=s;
                }
        }
}

