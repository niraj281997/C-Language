#include<stdio.h>
void printmatrix(int [3][3]);
int determinant(int [3][3]);
void main()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
        printf("\n Enter the Coefficients [Format : aX + bY + cZ = d] ");
        printf("\n Enter the values of a1, b1, c1 and d1 for 1st equation : ");
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
        printf("\n Enter the values of a2, b2, c2 and d2 for 2nd equation : ");
	scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
        printf("\n Enter the values of a3, b3, c3 and d3 for 2nd equation : ");
	scanf("%d %d %d %d",&a3,&b3,&c3,&d3);

	int matX[3][3] = { {d1,b1,c1}, {d2,b2,c2}, {d3,b3,c3} };
	int matY[3][3] = { {a1,d1,c1}, {a2,d2,c2}, {a3,d3,c3} };
	int matZ[3][3] = { {a1,b1,d1}, {a2,b2,d2}, {a3,b3,d3} };
	int coef[3][3] = { {a1,b1,c1}, {a2,b2,c2}, {a3,b3,c3} };
	
	printf("\n Coefficient Matrix : \n");
	printmatrix(coef);
	printf("\n X Matrix : \n");
	printmatrix(matX);
	printf("\n Y Matrix : \n");
	printmatrix(matY);
	printf("\n Z Matrix : \n");
	printmatrix(matZ);

	int detX, detY, detZ, detC;
	float x,y,z;

        printf("\n Solving The Equation using Cramer's Rule : ");
	detX = determinant(matX);
	detY = determinant(matY);
	detZ = determinant(matZ);
	detC = determinant(coef);	

        printf("\n Determinant of X : %d ", detX);
        printf("\n Determinant of Y : %d ", detY);
        printf("\n Determinant of Z : %d ", detZ);
        printf("\n Determinant of Coefficient Matrix: %d ", detC);

	x =((float)detX / (float)detC);
	y =((float)detY / (float)detC);
	z =((float)detZ / (float)detC);
		
        printf("\n Value of X : %f ", x);
        printf("\n Value of Y : %f ", y);
        printf("\n Value of Z : %f \n\n ", z);
}

void printmatrix(int a[3][3])
{
        for(int i=0 ; i<3 ; i++)
        {
                for(int j=0 ; j<3 ; j++)
                        printf("%d  ",a[i][j]);
        printf("\n");
        }
}

int determinant(int m[3][3])
{
	int r;
	r = m[0][0]*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]))-m[0][1]*((m[1][0]*m[2][2])-(m[1][2]*m[2][0]))+m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
	return r;
}
