#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool place(int k,int i,int* x){
	for(int j=0;j<k-2;j++){
		if(x[j]==i || abs(x[j]-i)==abs(j-k)) return false;
	}
	return true;
}
int count(int k,int*A,int n){
	int count=0;
	for(int i=0;i<n;i++) if(A[i]==k) count++;
	return count;
}
int y=0;
void Nqueens(int k,int n,int *x){
	for(int i=0;i<n;i++){
		//printf("%d\n",place(k,i,x));
		if(place(k,i,x)){
			x[k]=i;
			//printf("%d,\n",k);
			if(k==n-1){
				y=0;
				//eliminating duplicate entries
				for(int t=0;t<n;t++){
					if(count(x[t],x,n)!=1){y=1;break;}
				}
				//eliminating permutations which don't satisfy conditon for queens places
				for(int t=0;t<n-1;t++){
					if(x[t]==x[t+1]+1 || x[t]==x[t+1]-1) {y=1;break;}
				}
				if(y!=1){
					for(int l=0;l<n;l++){
						printf("%d ",x[l]+1);
					}
					printf("\n");
				}
			}
			else Nqueens(k+1,n,x);
		}
	}	
}

void main(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int x[n];
	Nqueens(0,n,x);
}
