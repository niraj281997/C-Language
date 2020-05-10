#include<stdio.h>
#include<stdlib.h>
#define size 5
void push(int data,int a[],int *t)
{
        if(*t==size-1)
        {
                printf("stack full\n");
        }
        (*t)++;
        a[*t]=data;
}

int  pop( int a[],int *t)
{
   if (*t==-1)
   {
 	  printf("stack is emapty");
   	return 0 ;
   }
   else 
   { 
	   int temp= a[*t];
	  (*t)--;
	  return temp;
   }
}
void  display(int ar[],int t)
{
 /*	int *x=t; 
	{	
		while (*x>=0)
		 {  
			printf("array[%d]=%d",*x,ar[*x]);
 			*x--;
 		       }

  }
  */
	for(int i=t;i>=0;i--)
	{
	printf("%d\n",ar[i]);
	
	}

}


int main()
{
int arr[size];
int top=-1,n,data;
do{
        printf("enter choice\n");
        printf("1.push stack\n 2.pop stack\n 3.display\n 4.exit\n");
        scanf("%d",&n);
        switch(n)
        	{
                case 1:printf("enter the data to push\n");
                       scanf("%d",&data);
                       push(data,arr,&top);
                       break;
                case 2:printf("popped data\n");
                       printf("%d",pop(arr,&top));
                       break;
		case 3:
		       display(arr,top);
		       break;
		case 4: 
		       exit(0);
		default:
		       printf("invalid value\n");
		       break;
		}	
	}
while (1);
return 0;

}





