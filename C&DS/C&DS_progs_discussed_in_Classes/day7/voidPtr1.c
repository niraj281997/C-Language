#include<stdio.h>

int main(){

	int x=0x11223344;
	char ch='a';
	float y=3.5;
	//char *ch=&x;

	void *vp = &x;
	//vp=&ch;
	//vp=&y;

	//++vp; // we should not inc/dec vp
	//*vp; // we should deref void ptr
	//
	printf("%u\n", vp); // add of x
	printf("%u\n", (int*)vp+1); // 
	printf("%u\n", *(int *)vp) 
	
	//

}
