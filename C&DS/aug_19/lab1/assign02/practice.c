#include <stdio.h>
//#include<stdlib.h>
int prime(int n)
{
int temp=0;
for (int i=2;i<=n/2;i++){
	if(n%i==0)
		temp++;
//printf("%d\n",i);
}
return temp;

}
int main ()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	if(prime(n))
		printf("\nnumber is NOT prime\n");
	else printf("\nnumber is  prime\n ");


}	
