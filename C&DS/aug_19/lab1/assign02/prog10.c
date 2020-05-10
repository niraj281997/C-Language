#include<stdio.h>
int prime(int);
void main(){
	int n,a=0,i=2;
	printf("Enter the number of prime numbers you want ");
	scanf("%d",&n);
	while(a<n)
	{	
		if(prime(i)==1)
		{
			printf("%d ",i);
			a++;
		}
	i++;
	}
	printf("\n");
}

int prime(int n)
{
    int i=0;
    if (n<=1)
        return 0;
    else
    {
	if (n==2)
    	{
        	return 1;
    	}
        else
    	{
        	for(i=2;i<n;i++)
        	{
        		if(n%i==0)
            		return 0;
        	}
    	}
    }
    return 1;
}
     
