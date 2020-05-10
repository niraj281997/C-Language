#include<stdio.h>

struct testS{
	int x;
	char ch;
	float f;
};
int main(){
	struct testS s1;
	s1.x=100;
	s1.ch='a';
	s1.f=3.5;
	printf("%u\n", &s1);  //1000
	printf("%d ", s1.x);
	printf("%c ", s1.ch);
	printf("%f ", s1.f);
	
	printf("%u\n", &s1.x);  //1000
	printf("%u\n", &s1.ch);  //1004
	printf("%u\n", &s1.f);  //1005

	struct testS s2;
	printf("enter x, ch and f val\n");
	scanf("%d %c %f", &s2.x, &s2.ch, &s2.f);
	printf("%d %c %f\n", s2.x, s2.ch, s2.f);
}





