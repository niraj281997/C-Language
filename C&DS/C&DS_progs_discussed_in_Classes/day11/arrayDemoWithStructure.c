#include<stdio.h>

struct student{
	char name[30];
	int roll_no;
};

void fun1(struct student  []);
void fun2(struct student  *);
void fun3(struct student *);

int main(){
	struct student stdArr[2];
	strcpy(stdArr[0].name,"abc");
	//stdArr[0].name="abc";
	stdArr[0].roll_no=1;
	strcpy(stdArr[1].name,"xyz");
	stdArr[1].roll_no=2;
	
	fun1(stdArr);
	fun2(stdArr);
	fun3(stdArr);
}

void fun3(struct student *p){
	for(int i=0;i<2;i++){
		printf("%s %d ", p->name, p->roll_no);
		p++;
	}
	printf("\n");
}

void fun1(struct student a[]){
	for(int i=0;i<2;i++){
		printf("%s %d ", a[i].name, a[i].roll_no);
	}
	printf("\n");
}
void fun2(struct student *p){
	for(int i=0;i<2;i++){
	  printf("%s %d ", p[i].name, p[i].roll_no); // *(p+i)
	}
	printf("\n");
}

