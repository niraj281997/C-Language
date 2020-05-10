#include<stdio.h>
void printmatrix(int [2][2]);
int determinant(int [2][2]);
void main()
{
	int a1,a2,b1,b2,c1,c2;
        printf("\n Enter the Coefficients [Format : aX + bY = C] ");
        printf("\n Enter the values of a1, b1, c1 for 1st equation : ");
	scanf("%d %d %d",&a1,&b1,&c1);
        printf("\n Enter the values of a2, b2, c2 for 2nd equation : ");
	scanf("%d %d %d",&a2,&b2,&c2);

	int matX[2][2] = { {c1,b1}, {c2,b2} };
	int matY[2][2] = { {a1,c1}, {a2,c2} };
	int coef[2][2] = { {a1,b1}, {a2,b2} };
	
        printf("\n Solving The Equation using Cramer's Rule : ");
	printf("\n Coefficient Matrix : \n");
	printmatrix(coef);
	printf("\n X Matrix : \n");
	printmatrix(matX);
	printf("\n Y Matrix : \n");
	printmatrix(matY);

	int detX, detY, detC;
	int x,y;

	detX = determinant(matX);
	detY = determinant(matY);
	detC = determinant(coef);	
	x = (detX/detC);
	y = (detY/detC);
		
        printf("\n Value of X : %d ", x);
        printf("\n Value of Y : %d ", y);
}

void printmatrix(int a[2][2])
{
        for(int i=0 ; i<2 ; i++)
        {
                for(int j=0 ; j<2 ; j++)
                        printf("%d  ",a[i][j]);
        printf("\n");
        }
}
int determinant(int m[2][2])
{
	int r;
	r= (m[0][0]*m[1][1])-(m[0][1]*m[1][0]); 
	return r;
}
