#include<stdio.h>
int main (){
	int n;
	printf("Enter the size of matrix ;");
	scanf("%d",&n);

	static int a[20][20];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}

		printf("\n");
		printf("\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
				a[i][j]=1;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
}
