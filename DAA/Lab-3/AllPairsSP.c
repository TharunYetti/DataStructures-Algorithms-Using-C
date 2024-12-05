#include <stdio.h>
void main(){
	int n;
	printf("Enter the no.of vertices does the graph have:");
	scanf("%d",&n);
	int A[n][n];
	printf("If there is no path between two vertices, put 99999\nNow, Enter the adjacency matrix\n");
	for(int i=0;i<n;i++){
		printf("Row-%d : ",i+1);
		for(int j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j && i!=k && j!=k){
					if(	A[i][k]+A[k][j] < A[i][j] ) A[i][j]=A[i][k]+A[k][j];
				}
			}
		}
	}
	printf("\nOuput :\n");
	for(int i=0;i<n;i++){
		printf("\t");
		for(int j=0;j<n;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
