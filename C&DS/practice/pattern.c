#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("\n enter number \n");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j =i;j>0;j--)
			printf("%d",i);
		printf("\n");
		}


}
