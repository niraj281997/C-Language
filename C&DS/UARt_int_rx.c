#include<LPC214X.h>
unsigned char str[20];
void uart_recstr()__irq
	{
		unsigned char *str1=str;
	while(*(str1 -1)!='\r')
		{
			*str1= U1RBR;
			str1++;
}
		*(str1-1)='\0';
U1THR=0x0A;
VICVectAddr0=0x00;
	}
/*void uarttrans(void)__irq
{
	
	int i=0;
	while(str[i]!='\0'){
		U1THR=str[i];
		i++;
	}

		VICVectAddr0=0x00;
}*/
	void uart_transstr(unsigned char * str){
	
	while(*(str)!='\0')
		{
	while(!(U1LSR & 0x20));
	U1THR=*str;
			str++;
}
		
		}
void uart1_init()
{
	PINSEL0|=(1<<16)|(1<<18);
	VPBDIV=0x02;
	U1LCR=0x83;
	U1DLL=0xB7;
	U1FDR=0xF1;
	U1LCR=0x03;
	U1IER|=(1<<1)|(1<<0);
	VICIntEnable|=(1<<7);
	VICVectCntl0=0x20|0x07;
	VICVectAddr0=(unsigned)uart_recstr;
	//VICVectAddr0=(unsigned)uarttrans;

}



int main()
{
	
	uart1_init();
	while(1){
		
		uart_transstr(str);
		//U1THR=0x0A;
	
	}

}
