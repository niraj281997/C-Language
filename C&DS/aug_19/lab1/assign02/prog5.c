#include<stdio.h>
int prime(int);
void main(){
        int n;
        printf("Enter the number you want to check if it a prime number : ");
        scanf("%d",&n);

    if( n<=1 || prime(n)==0 )
        printf("The given number is not a prime numnber \n");
    else
        printf("The given number is a prime number\n");

}

int prime(int n)
{
    int i=0;
   
    if (n==2)
        return 1;
    else
    {
        for(i=2;i<n;i++)
        {
        if(n%i==0)
            return 0;
        }
    }
    return 1;

}
                                                                                                                                                                                                                                                                                                                                                             
                           
