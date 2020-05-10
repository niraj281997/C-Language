#include<stdio.h>
int fun();
int main(){
	int x=10;
	fun();
	printf("in main fun %p \n",&x );
	fun();

}

int fun(){
	int x=10;
	printf("in fun fun() %p\n ", &x);
}
