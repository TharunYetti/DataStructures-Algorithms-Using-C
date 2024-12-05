#include <stdio.h>
void main(){
	int r,c,i,j,temp;
	printf("ENter the rows and columns of matrix with a space between : ");
	scanf("%d %d",&r,&c);
	int m1[r][c],m2[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the element at position m1[%d][%d] :",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix is \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			m2[i][j]=m1[j][i];
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}	
}
