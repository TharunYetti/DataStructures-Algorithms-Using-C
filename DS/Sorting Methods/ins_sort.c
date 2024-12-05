#include <stdio.h>
#include <stdlib.h>
void printArray(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void main(){
	int array[5]={34,54,23,67,87},n=5;
	printArray(array,n);
	for(int i=1;i<n;i++){
		int key=array[i],j=i-1;
		for(;j>=0 && array[j]>key;j--){
			array[j+1]=array[j];
		}
		array[j+1]=key;
	}
	printf("Sorted\n");
	printArray(array,n);
}

int[] ins_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int key=a[i],j=i-1;
		for(;j>=0 && a[j]>key;j--){
			a[j+1]=a[j];
		}
		a[j+1]=key;
	}
	return a;
}
