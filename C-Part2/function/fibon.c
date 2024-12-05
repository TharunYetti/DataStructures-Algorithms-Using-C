#include <stdio.h>
int fibon(int);
void main(){
	int terms;
	printf("How many terms do you want the fibonacci series:");
	scanf("%d",&terms);
	for(int i=0;i<=terms;i++)
		printf("%d,",fibon(i));
	printf("\b\n");
}
int fibon(int a){
	if(a==0 || a==1)
		return a;
	else
		return fibon(a-2)+fibon(a-1);
}
