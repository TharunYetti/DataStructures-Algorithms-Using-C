#include <stdio.h>
int fibon(n){
	if(n==0 || n==1)
		return n;
	else
		return fibon(n-1)+fibon(n-2);
}
void main(){
	printf("ENter how many terms do you want the fibonacci series:");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		printf("%d,",fibon(i));
}
