//quick sort
#include <stdio.h>
int partitioning(int arr[],int l,int h){
	int pivot=arr[l];
	int i=l,j=h;
	while(i<j){
		while(i<=h && pivot>=arr[i]) i++;
		while(pivot<arr[j]) j--;
		if(i<j){
			int tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
		}
	}
	int temp=pivot;
	arr[l]=arr[j];
	arr[j]=temp;
	return j;
}
void QuickSort(int arr[],int l,int h){
	if(l<h){
		int j=partitioning(arr,l,h);
		QuickSort(arr,l,j-1);
		QuickSort(arr,j+1,h);
	}
}
void main(){
	int arr[6]={45,91,69,83,82,89};
	//printf("%d",arr[1]);
	QuickSort(arr,0,5);
	for(int i=0;i<6;i++){
		printf("%d\n",arr[i]);
	}
}
