#include <stdio.h>
void main(){
	for(int i=1;i<=3;i++){
		for(int j=3+1-i;j>0;j--){
			printf("* ");
		}
		for(int k=1;k<i;k++){
			printf("- ");
		}
		printf("\n");
	}
}
