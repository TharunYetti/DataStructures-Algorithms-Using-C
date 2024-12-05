#include <stdio.h>
void main(){
	int i,j,k,n;
	//printf("Enter no.of rows:");
	//scanf("%d",&n);
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=(5-i);j++){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			if( k==1 || k==i ){
				printf("* ");
			}
			else{
				printf("- ");
			}
		}
	}
	printf("\n");
}
