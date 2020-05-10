#include<stdio.h>
int main()
{	
	char *a="0110010100110100";
	char ans[4];
	int cal[4];
	int k=0,temp=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++);
		{
			cal[j+k]=a[15-k-j];
			k=k+4;
		}

		temp=cal[0]*8+cal[1]*4+cal[2]*2+cal[3]*1;
		
		if(temp==15)
			ans[i]="F";
		else if(temp==14)
			ans[i]="E";
		else if(temp==13)
			ans[i]="D";
		else if(temp==12)
			ans[i]="C";
		else if(temp==11)
			ans[i]="B";
		else if(temp==10)
			ans[i]="A";
		else
			ans[i]=temp;

	}
	
	printf("%d%d%d%d",ans[0],ans[1],ans[2],ans[3]);
	
}
