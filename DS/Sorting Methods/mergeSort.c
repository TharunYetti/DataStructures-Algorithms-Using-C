#include <stdio.h>
int B[100];
void merge(int A[],int l,int m,int h){
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
void mergeSort(int A[],int l,int h){
	if(l<h){//making sure that the list contains at least one element
		int m=(l+h)/2;
		mergeSort(A,l,m);
		mergeSort(A,m+1,h);
		merge(A,l,m,h);
	}
}
void main(){
	int A[]={29,34,12,23,33,56,78,46,58};
	mergeSort(A,0,8);
	for(int i=0;i<=8;i++) printf("%d\n",A[i]);
}
