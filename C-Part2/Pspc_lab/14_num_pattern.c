#include <stdio.h>
void recur(int);
void main(){
	printf("ENter how many terms do you want:");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		recur(i);
		printf(",");
	}
	printf("\b \n");
}
void recur(int n){
	if(n==1)
		printf("%d",7);
	else{
		printf("%d",7);
		recur(n-1);
	}
	//printf(",");
}
