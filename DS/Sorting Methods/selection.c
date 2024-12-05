//selection sort
#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[5]={20,12,56,38,92},n=5,pos;
	for(int i=0;i<n-1;i++){
		pos=i;
		for(int j=i+1;j<n;j++){
			if(arr[pos]>arr[j]) pos=j;
		}
		if(pos!=i){
			int tmp=arr[pos];
			arr[pos]=arr[i];
			arr[i]=tmp;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
int[] selection(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[pos]>a[j]){
				pos=j;
			}
		}
		if(pos!=i){
			int tmp=arr[pos];
			arr[pos]=arr[i];
			arr[i]=tmp;
		}
	}
	return a;
}
