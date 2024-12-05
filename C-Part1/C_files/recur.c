#include <stdio.h>
void recur(int);
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=5;i++){
		recur(i);
		printf(",");
	}
	printf("\b \n");
}
void recur(int n){
	if(n==1){
		printf("%d",7);
	}
	else{
		printf("%d",7);
		recur(n-1);
	}
}
