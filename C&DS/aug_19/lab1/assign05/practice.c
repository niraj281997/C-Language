#include<stdio.h>
#define FLIP(a,b) ((a)&=~(1<<b))
void main()
{
        int x;
        x=104;
        char *a;
	if(x%10!=0)
	{	
		for(int i =0 ;i<4;i++)
			FLIP(x,i);

	}
	printf("%d",x);
  //      a=&x;
//	if(*a)
//	printf("");a
}
