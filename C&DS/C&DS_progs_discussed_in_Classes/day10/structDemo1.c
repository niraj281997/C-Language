#include<stdio.h>

struct testS{
	int x;
	char ch;
	float f;
};

struct demoS{
	int x;
	float f;
	char ch;
};
struct tryS{
	int x;
	float f;
	char ch;
	char c;
	char c1;
	char c2;
};

int main(){
	struct testS s1;
	struct demoS t1;
	struct tryS p1;
	printf("size of s1=%d\n", sizeof(s1));
	printf("size of t1=%d\n", sizeof(t1));
	printf("size of p1=%d\n", sizeof(p1));

}
