#include<stdio.h>

struct A{
	int x;
	char y;
	struct B{           //Nested Structure
		float z;
		double w;
	}b1;
}a1;

int main()
{
	printf("\nEnter an Integer ");
	scanf("%d",&a1.x);
	printf("Enter a Character : ");
	__fpurge(stdin);
	scanf("%c",&a1.y);
	printf("Enter a float : ");
	scanf("%f",&a1.b1.z);           //Using the Nested Structure
	printf("Enter a double ");
	scanf("%lf",&a1.b1.w);

	printf("\n\nInteger - %d\nCharacter - %c\nFloat - %f\nDouble - %lf\n",a1.x,a1.y,a1.b1.z,a1.b1.w);


}
