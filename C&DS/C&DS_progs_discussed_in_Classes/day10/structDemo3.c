#include<stdio.h>

struct testS{
	int x;
	char ch;
	float f;
};
int main(){
	struct testS s1={100, 'a', 3.5};
	struct testS s2;
	s2=s1;
	printf("%d %c %f\n", s2.x, s2.ch, s2.f);
}





