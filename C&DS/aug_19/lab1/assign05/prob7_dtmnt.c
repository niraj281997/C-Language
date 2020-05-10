#include<stdio.h>

int main()
{
        int b[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
        int a[2][2] = { {3,2},{8,5} };
	int i, j,det1=0,det2=0;

	printf("\nMatrix A :\n");
        for(i=0 ; i<2 ; i++)
        {
                for(j=0 ; j<2 ; j++)
                        printf("%d ",a[i][j]);
	printf("\n");
	}
	
	printf("\nMatrix B :\n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                        printf("%d ",b[i][j]);
        printf("\n");
        }

	det1=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	det2=b[0][0]*((b[1][1]*b[2][2])-(b[1][2]*b[2][1]))-b[0][1]*((b[1][0]*b[2][2])-(b[1][2]*b[2][0]))+b[0][2]*((b[1][0]*b[2][1])-(b[1][1]*b[2][0]));

	printf("The determinant of 2x2 matrix is %d \n",det1);
	printf("The determinant of 3x3 matrix is %d \n",det2);
}
