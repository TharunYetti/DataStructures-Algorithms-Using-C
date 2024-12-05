#include <stdio.h>
int fact(int);
void main(){
	int num;
	printf("ENter a number:");
	scanf("%d",&num);
	printf("The factorial of number is %d\n",fact(num));
}
int fact(int a){
	int prod=1;
	for(int i=1;i<=a;i++){
		prod=prod*i;
	}
	return prod;
}
