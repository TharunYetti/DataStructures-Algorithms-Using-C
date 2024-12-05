#include <stdio.h>
void main(){
	int i,j,k,n;
	//printf("Enter no.of rows:");
	//scanf("%d",&n);
	for(i=1;i<=3;i++){
		printf("\n");
		for(j=1;j<=(3-i);j++){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
	}
	printf("\n");
}
