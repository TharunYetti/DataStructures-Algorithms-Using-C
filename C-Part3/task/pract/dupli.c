#include <stdio.h>
void main(){
	int n=5,i,j;
	for(int i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(j=j;j<=(5*2-i);j++){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}	
}
