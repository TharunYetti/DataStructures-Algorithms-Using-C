#include <stdio.h>
int B[100];
void merge(int* A,int l,int m,int h){
	int i=l,j=m+1,k=l;
	while(i<=m && j<=h){
		if(A[i]<A[j])
			B[k++]=A[i++];
		else 
			B[k++]=A[j++];
	}
	while(i<=m) B[k++]=A[i++];
	while(j<=h) B[k++]=A[j++];
	for(int t=l;t<k;t++) A[t]=B[t];
}
void mergeSort(int* A,int l,int h){
	if(l<h){
		int m=(l+h)/2;
		mergeSort(A,l,m);
		mergeSort(A,m+1,h);
		merge(A,l,m,h);
	}
}
void main(){
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter the element %d:",i+1);
		scanf("%d",&A[i]);
	}
	mergeSort(A,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
