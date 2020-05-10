#include<stdio.h>
int main()
{
//	float a,b;
//	printf("Enter the number ");
//	scanf("%f%f",&a,&b);
//	printf("%3.2f %4.3f",a,b);
	int n,i=0;
	scanf("%d",&n);
	int a[3],sum=0;
	while(n!=0)
	{
		a[i++]=n%10;
		n/=10;
	}
	for(int j=i;j<=i;j--)
	{
		a[j]*=(10*j);
		sum=sum+a[j];
	}
printf("%d",sum);

}
