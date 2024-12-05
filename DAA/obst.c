//work in pending
#include <stdio.h>
int freq(int i,int j,int* F){
	int sum=0;
	for(int k=i+1;k<=j;k++){
		sum+=F[k-1];
	}
	return sum;
}
void main(){
	int n;
	printf("Enter the no.of keys:");
	scanf("%d",&n);
	int K[n],F[n];
	for(int i=0;i<n;i++){
		printf("Enter the key-%d details: ",i+1);
		scanf("%d %d",&K[i],&F[i]);
	}
	int A[n+1][n+1];
	for(int i=0;i<n+1;i++) for(int j=0;j<n+1;j++) if(j-i==0) A[i][j]=0;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			if(j-i==1) A[i][j]=freq(i,j,F);
			else if(j!=i){
				int min=99999;
				for(int k=i+1;k<=j;k++){
					int m=A[i][k-1]+A[k][j]+freq(i,j,F);
					if(m<min) min=m;
				}
				A[i][j]=min;
			}
		}
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			if(j>=i) printf("%d\t",A[i][j]);
			else printf("\t");
		}
		printf("\n");
	}
}
