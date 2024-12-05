#include <stdio.h>
void main(){
	int r,c;
	printf("Enter the rows and columns of matrix with a spca between: ");
	scanf("%d %d",&r,&c);
	int m1[r][c],m2[r][c],m3[r][c],i,j;
	printf("------------ Matrix 1 ----------\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENter the elemet m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("------------ Matrix 2 ----------\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENter the elemet m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("THe Resultant matrix is \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}

