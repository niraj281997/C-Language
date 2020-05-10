#include<stdio.h>

void main()
{
	char a[6];
	char *pt;
	int x;
	printf("\nEnter a String Containing Numbers Only[size-6] : ");
	scanf("%s",a);

	pt=a;
	
	sscanf(pt,"%d",&x);

	printf("%s\n",pt);
	printf("%d\n",x);
	printf("%d\n",sizeof(pt));
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(x));
}

