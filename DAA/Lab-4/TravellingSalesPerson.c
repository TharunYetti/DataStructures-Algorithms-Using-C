//travelling sales person
#include <stdio.h>
int temp,n,h;
int t=0;
int cost(int start,int *sub,int l,int end,int A[n][n],int* result){
	if(l==0){
		return A[start-1][end-1];
	}
	int min=99999;
	for(int i=0;i<l;i++){
		int B[l-1],k=0;
		for(int j=0;j<l;j++){
			if(j!=i) B[k++]=sub[j];
		}
		h=t;
		result[t++]=sub[i];
		temp=A[start-1][sub[i]-1]+cost(sub[i],B,l-1,1,A,result);
		if(temp<min) min=temp;
		else t=h;
	}
	return min;
}
void main(){
	printf("Enter the no.of vertices does the graph have:");
	scanf("%d",&n);
	int A[n][n];
	for(int i=0;i<n;i++){
		printf("Row-%d : ",i+1);
		for(int j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	int B[n-1],k=0;
	for(int i=1;i<n;i++){
		B[k++]=i+1;
	}
	int answer[2*n];
	int TotalCost=cost(1,B,3,1,A,answer);
	printf("%d is the minimum cost.\n",TotalCost);
	printf("Path : 1-");
	for(int q=0;q<n-1;q++){
		printf("%d-",answer[q]);
	}
	printf("1\n");
}
