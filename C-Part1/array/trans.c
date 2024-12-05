#include <stdio.h>
void main(){
	int r,c;
	printf("Enter rows and colums of matrix:");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("Enter ELemtn at arr[%d][%d]",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	int trans[c][r];
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			trans[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}
