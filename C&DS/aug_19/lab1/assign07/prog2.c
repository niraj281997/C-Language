#include<stdio.h>

int g_var=333;				//Global Variable

int main()
{
        int a=111;			//Local Variable
        register int b=222;		//Local Register Variable
	    
        //printf("Address of Global variable\n", &g_var);		
        printf("You can't access the address of Global variable\n");
        
        printf("The address of the Local integer variable is %u(%p)\n",&a,&a);
        
        //printf("Address of Local Register variable\n", &b);
        printf("You can't access the address of Local Register variable\n");
}
