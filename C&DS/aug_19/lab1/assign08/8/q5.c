#include<stdio.h>

int Atoi(char *str)
{
	int res=0,sign=1,i=0;

	if(*str == '\0')
		return 0;
 
	if(str[0] == '-')
	{
		sign=-1;
		i++;
	}

	for(;str[i]!='\0';++i)
	{
		if(str[i]<='0' ||  str[i]>='9')
			return 0;
	
		res=res*10+str[i]-'0'
	
	}

	return sign*res;

}

void main()
{
	char str[]="4321";
	int x;

	printf("String in Char %s\n",str);

	//printf("String in Char+1 %s\n",++str);   //not allowed

	x=Atoi(str);

	printf("String in Int %d\n",x);

	printf("String in Int+1 %d\n",++x);
}
