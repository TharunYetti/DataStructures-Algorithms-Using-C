#include <stdio.h>
int inp;
void main(){
	printf("Enter a number:");
	scanf("%d",&inp);
	for(int i=1;i<=inp;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");	
	}
	for(int m=inp-1;m>0;m--){
		for(int n=1;n<=m;n++){
			printf("* ");
		}
		printf("\n");
	}
}
