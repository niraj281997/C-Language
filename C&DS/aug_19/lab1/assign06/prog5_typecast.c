#include<stdio.h>
void *typec(int *);
int main(){
	
	int * p,a;
	p=&a;
	p=(char *)typec(p);
	printf("The pointer type is changed from int to char pointer ");
	
}

void *typec(int * a)
{
return a;
}
