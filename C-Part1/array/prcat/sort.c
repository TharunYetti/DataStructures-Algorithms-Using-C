#include <stdio.h>
void main(){
	int arr[10]={2,3,7,4,7,9,4,2,6,7},temp,size=10;
	for(int i=0;i<(size-1);i++){
		for(int j=0;j<(size-1-i);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Your sorted array is { ");
	for(int k=0;k<10;k++){
		printf("%d,",arr[k]);
	}
	printf("\b }\n");
}
