#include <stdio.h>
void swap(int* a,int* b){
	int t=*a;
	*a=*b;
	*b=t;
}
int partitioning(int* A,int l,int h){
	int pivot=A[l],i=l,j=h,temp;
	while(i<j){
		while(A[i]<=pivot) i++;
		while(A[j]>pivot) j--;
		if(i<j){
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[l],&A[j]);
	return j;
}
void quickSort(int* A,int l,int h){
	if(l<h){
		int j=partitioning(A,l,h);
		quickSort(A,l,j-1);
		quickSort(A,j+1,h);
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
	quickSort(A,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
