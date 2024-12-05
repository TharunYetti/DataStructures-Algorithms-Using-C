#include <stdio.h>
void main(){
	int i,j,k,n;
	printf("Enter no.of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=(n+1-i);j++){
			printf("* ");
		}
		for(k=1;k<=(i-1);k++){
			printf("_ ");
		}
	}
	printf("\n");
}
