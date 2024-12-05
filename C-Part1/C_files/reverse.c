#include <stdio.h>
void main(){
	int arr[]={1,2,3,4,5};
	int temp,start=0,end=4,n=5;
	while(end!=(n/2-1)){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;end--;
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\b \n");
} 
