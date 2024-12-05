#include <stdio.h>
void main(){
	int arr[2][3]={ {1,2,3},{4,5,6} };
	int r=2,c=3,mat[c][r];
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++)
			mat[i][j]=arr[j][i];
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
}
