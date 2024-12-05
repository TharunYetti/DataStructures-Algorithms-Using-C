//write a program for fbonacci series
#include <stdio.h>
void main(){
	int n,a=0,b=1,c;
	printf("How many terms do you want:");
	scanf("%d",&n);
	printf("%d,%d,",a,b);
	for(int i=3;i<=n;i++){
		c=a+b;a=b;b=c;
		printf("%d,",c);
	}
	printf("\b \n");
	
}
