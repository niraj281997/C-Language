#include<stdio.h>
int main ()
{
        int a[20][20];
        int i,j,n,m=0;
        printf("Enter the Size : \n");
        scanf("%d",&n);
        printf("Enter the matrix elements \n ");

        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("\nEnter R %d C %d :",i+1,j+1);
                        scanf("%d",&a[i][j]);
                }
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(a[i][j]!=0)
                        m=1;
                }
        }
        if(m==0)
                printf("The Matrix is Null\n");
        else
                printf("The Matrix is Not Null\n");
}
