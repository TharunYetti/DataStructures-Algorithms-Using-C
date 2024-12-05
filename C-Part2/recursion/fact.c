#include <stdio.h>
long long fact(int);
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The factorial is %lld\n",fact(n));
}
long long fact(int n){
	if(n>=0){
		if(n==1)
			return 1;
		else if(n==0)
			return 1;
		else
			return fact(n-1)*n; 
	}
}
