#include <stdio.h>
void insertionSort(int* A,int n){
	for(int i=1;i<n;i++){
		int key=A[i];
		int j=i-1;
		for(;j>=0 && A[j]>key;j--){
			A[j+1]=A[j];
		}
		A[j+1]=key;
	}
}
void main(){
	int n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter the element %d:",i+1);
		scanf("%d",&A[i]);
	}
	insertionSort(A,n);
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
