#include <stdio.h>
void mult(int n,int *a1[n][n],int *a2[n][n]){
	int c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
				int a=a1[i][k],b=a2[k][j];
				c[i][j]+=a*b;
			}
		}
	}
	printf("Resultant matrix is \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
void main(){
	printf("Enter the order of matrix:");
	int n;
	scanf("%d",&n);
	int *a1[n][n],*a2[n][n];
	for(int i=0;i<n;i++){
		printf("%d\n",i+1);
		for(int j=0;j<n;j++){
			printf("ENter:");
			scanf("%d",&a1[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",i+1);
		for(int j=0;j<n;j++){
			printf("ENter:");
			scanf("%d",&a2[i][j]);
		}
	}
	mult(n,a1,a2);
}
