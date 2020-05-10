
#include <stdio.h>
//#include <>
int main()
{

#ifdef DEBUGG
	macro(x,y) x>y?x:y
#endif
#ifndef DEBUGG
	macro(x,y) (x)
#endif
	int x,y;
	x=2;
	y=3;
	macro(++x,++y);
	printf("%d",x,y);
		
}
