#include<stdio.h>


int main(){

	int i;
	int j=1;
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		j=j*i;
		printf("the factorial of %d is %d\n",num,j);
	}
}
