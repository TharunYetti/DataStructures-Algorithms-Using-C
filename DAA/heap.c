#include <stdio.h>
void swap(int a[],int i1,int i2){
	int temp=a[i1];
	a[i1]=a[i2];
	a[i2]=temp;
}
void heapify(int a[],int n,int i){
	int large=i,l=2*i+1,r=2*i+2;
	if(l<n && a[l]>a[large]) large=l;
	if(r<n && a[r]>a[large]) large=r;
	if(large!=i){
		swap(a,i,large);
		heapify(a,n,large);
	}
}
void heapSort(int a[],int n){
	int i=n-1;
	while(i>=0){
		heapify(a,n,i);
		i--;
	}
	i=n-1;
	while(i>0){
		swap(a,i,0);
		heapify(a,i,0);
		i--;
	}
}
void main(){
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);	
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	heapSort(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
