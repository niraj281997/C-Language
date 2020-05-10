#include<stdio.h>

int main()
{
        int a[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
        static int c[3][3];
	int i, j,sum=0;
        
	printf("\n Matrix A : \n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                        printf("%d  ",a[i][j]);
        	printf("\n");
        }
        
	for(i=0 ; i<3 ; i++)
		for(j=0 ; j<3 ; j++)
			c[i][j] = a[j][i];
		
	printf("\n Transpose of the Matrix : \n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                        printf("%d  ",c[i][j]);
        	printf("\n");
        }
}


