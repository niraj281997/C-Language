#include<stdio.h>

struct item {
	int x;
	char y;
};

int main(){
	struct item i1, i2;  // static 
	i1.x=10;
	i1.y='a';
	i2.x=20;
	i2.y='b';

	//------------------
	
	// array approach ( static )
	
	struct item arr[2];

	arr[0].x=10;
	arr[0].y='a';
	arr[1].x=20;
	arr[1].y='b';

	//------------------------- dynamic
	
	struct item *p;
     p=(struct item *)malloc(sizeof(struct item));
	p->x=10;
	p->y='a';

	struct item *q;
     q=(struct item *)malloc(sizeof(struct item));
     q->x=20;
     q->y='b';

	free(p);
	free(q);




}
