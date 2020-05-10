#include<stdio.h>

int fun1(){

}

int fun2(){

}

int fun3(){

}
int main(){
	int (*arr1[3])();

	arr1[0]=fun1;
	arr1[1]=fun2;
	arr1[2]=fun3;


}
