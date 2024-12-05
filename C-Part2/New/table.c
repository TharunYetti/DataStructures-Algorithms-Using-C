#include <stdio.h>
int inp;
void main(){
	printf("Enter a number:");
	scanf("%d",&inp);
	for(int i=1;i<=10;i++){
		printf("%d X %d = %d \n",inp,i,inp*i);
	}
}
