//travelling sales person
#include <stdio.h>
int temp,n,h,t=0;
int cost(int start,int *sub,int l,int end,int A[n][n],int* result,int* farray,int recurIndex){
	if(l==0){
		return A[start-1][end-1];
	}
	int min=99999;
	for(int i=0;i<l;i++){
		int B[l-1],k=0;
		for(int j=0;j<l;j++){
			if(j!=i) B[k++]=sub[j];
		}
		//h=t;
		//result[t++]=sub[i];
		temp=A[start-1][sub[i]-1]+cost(sub[i],B,l-1,end,A,result,farray,recurIndex+1);
		if(temp<min){
			min=temp;
			result[recurIndex]=sub[i];
			if(l==n-1){
				for(int i=0;i<n-1;i++){
					farray[i]=result[i];
				}
			}	
		}
		//else{t=h;}
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
	int sn;
	printf("Enter the source node:");
	scanf("%d",&sn);
	int B[n-1],k=0;
	for(int i=0;i<n;i++){
		if(i!=sn-1) B[k++]=i+1;
	}
	int answer[2*n],farray[2*n];
	int TotalCost=cost(sn,B,n-1,sn,A,answer,farray,0);
	printf("%d is the minimum cost.\n",TotalCost);
	
	printf("Path : %d-",sn);
	for(int q=0;q<n-1;q++){
		printf("%d-",farray[q]);
	}
	printf("%d\n",sn);
}
