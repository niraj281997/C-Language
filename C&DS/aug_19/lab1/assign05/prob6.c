#include<stdio.h>
int main()
{
        int a[3][3] = { {8,8,3},{1,2,3},{1,2,3} };
        static int trace;
	int i, j;
        printf("\n Matrix A : \n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                        printf("%d",a[i][j]);
        printf("\n");
        }
	

        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
		{ if( i==j)
			trace += a[i][j];
		}
	}
        printf("\n Trace : %d\n", trace);

}
