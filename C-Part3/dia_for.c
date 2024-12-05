#include <stdio.h>
int inp;
void main(){
	printf("ENter a number:");
	scanf("%d",&inp);
	for(int i=1;i<=inp;i++){
		for(int j=1;j<=(inp-i);j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int m=(inp-1);m>0;m--){
		for(int n=1;n<=(inp-m);n++){
			printf(" ");
		}
		for(int o=m;o>0;o--){
			printf("* ");
		}
		printf("\n");
	}
}
