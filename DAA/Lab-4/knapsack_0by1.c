#include <stdio.h>
int find(int*A,int l,int k){
	for(int i=l-1;i>=0;i--){
		if(A[i]==k) return i;
	}
	return -1;
}
void main(){
	int n,M;
	printf("Enter the no.of items:");
	scanf("%d",&n);
	printf("Enter the maximum capcity of the bag:");
	scanf("%d",&M);
	int P[n],W[n],A[n+1][M+1];
	printf("Enter the items as \'profit weight\'\n");
	for(int i=0;i<n;i++){
		printf("Enter the Item-%d details:",i+1);
		scanf("%d %d",&P[i],&W[i]);
	}
	for(int i=0;i<=n;i++){
		for(int w=0;w<=M;w++){
			if(i==0 || w==0) A[i][w]=0;
			else if(W[i-1]<=w){
				if(( P[i-1]+A[i-1][w-W[i-1]] ) >A[i-1][w]) A[i][w]=P[i-1]+A[i-1][w-W[i-1]];
				else A[i][w]=A[i-1][w];
			} 
			else A[i][w]=A[i-1][w];
		}
	}
	//printing table
	printf("\n");
	for(int i=0;i<=n;i++){
		for(int j=0;j<=M;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//finding the items
	int Solution[n],pos=n-1;
	int max=A[n][M],s=n,t;
	while(max>0 && s>0){
		t=find(A[s],M+1,max);
		if(A[s][t]!=A[s-1][t]){
			Solution[pos]=1;
			max=max-P[pos--];
		}
		else Solution[pos--]=0;
		s--;
	}
	//printing solution
	printf("Solution : [ ");
	for(int i=0;i<n;i++){
		printf("%d,",Solution[i]);
	}
	printf("\b ]\n");
}
