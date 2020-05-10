#include<stdio.h>
int main(){
	int a[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
        int b[3][3] = { {7,8,9},{1,2,1},{1,2,3} };
        int i, j,sum=0;
        printf("\n Matrix A : \n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                        printf("%d",a[i][j]);
        printf("\n");
        }
        printf("\n Matrix B : \n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                        printf("%d",b[i][j]);
        printf("\n");
        }

	int c,r;
	int k[3][3];
	int rv1,rv2,rv3,cv1,cv2,cv3;
	int* r1,r2,r3,c1,c2,c3;
	r1=&rv1;r2=&rv2;r3=&rv3;c1=&cv1;c2=&cv2;c3=&cv3;
	for(c=0;c<3;c++){
		second(b,c,c1,c2,c3);

		for(r=0;r<3;r++){
			first(a,r,r1,r2,r3);
			sum+=(cv1)*(rv1)+(cv2)*(rv2)+(cv3)*(rv3);
			k[c][r];
			sum=0;
		}
		}

}
void  second(int**b,int c,int* c1,int* c2,int* c3)
{
       *c1=b[0][c];
	*c2=b[1][c];
 	*c3=b[2][c];
}
void  first(int** a, int r, int* r1,int* r2, int* r3)
{
	*r1=a[r][0];
	*r2=a[r][1];
	*r3=a[r][2];
}

