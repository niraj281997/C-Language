#include<stdio.h>

struct testS{
	int x;
	char ch;
};
int main(){
	struct testS arr[3];
	for(int i=0;i<3;i++){
		printf("enter %d element\n",i+1);
	scanf("%d %c", &arr[i].x, &arr[i].ch);
	}

	for(int i=0;i<3;i++){
	 printf("%d %c\n", arr[i].x, arr[i].ch);
	}
}





