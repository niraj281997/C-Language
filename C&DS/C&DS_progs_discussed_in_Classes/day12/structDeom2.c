#include<stdio.h>

struct item {
	int x;
	char y;
	struct item *next;
};

int main(){
	struct item *p;
      p=(struct item *)malloc(sizeof(struct item));
	p->x=10;
	p->y='a';
	p->next=NULL;

 p->next=(struct item *)malloc(sizeof(struct item));
	p->next->x=20;
	p->next->y='b';
	p->next->next=NULL;


 p->next->next=(struct item *)malloc(sizeof(struct item));
	p->next->next->x=30;
	p->next->next->y='c';
	p->next->next->next=NULL;


	struct item *t;
	t=p;
	while(t->next!=NULL){
		t=t->next;
	}
	t->next=(struct item *)malloc(sizeof(struct item));
	t->next->x=50;
	t->next->y='e';
	t->next->next=NULL;

///---------------------------
//
	struct item *t;
	t=p;
	while(t!=NULL){
		printf("%d %c ", t->x, t->y);
		t=t->next;
	}



 /*
	int x=10;
	int *p=NULL;
	p=&x;
	p=NULL;*/
	/*void *v;
	v=NULL;
	struct item *ip;
	ip=NULL;*/

}
