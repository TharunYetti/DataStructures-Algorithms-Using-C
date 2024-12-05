#include <stdio.h>
void heapify(int A[],int n,int i){
	int l=2*i+1,r=2*i+2;
	int large=i;
	if(l<n && A[l]>A[large]) large=l;
	if(r<n && A[r]>A[large]) large=r;
	if(large!=i){
		int temp=A[i];
		A[i]=A[large];
		A[large]=temp;
		heapify(A,n,large);
	}
}
void heapSort(int A[],int n){
	for(int i=n-1;i>=0;i--){
		heapify(A,n,i);
	}
	int i=n-1;
	while(i>0){
		int temp=A[0];
		A[0]=A[i];
		A[i]=temp;
		heapify(A,i,0);
		i--;
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
	heapSort(A,n);
	printf("The sorted array is\n");
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
