#include<stdio.h>

struct testS{
	int x;
	char ch;
};

void fun1(struct testS);
void fun2(struct testS []);
void fun3(struct testS * );

int main(){
	struct testS s1={100,'a'};
	struct testS arr[3];
	fun1(s1);
	fun2(arr);
	fun3(&s1);

}

void fun3(struct testS *p){
	printf("in fun3= %d %c\n", p->x, p->ch);

}
void fun1(struct testS s){
	printf("%d %c\n", s.x, s.ch);
}
void fun2(struct testS a[]){
	
}





