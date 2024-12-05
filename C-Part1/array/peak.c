#include <stdio.h>
void main(){
	int arr[10]={2,3,7,4,7,9,4,2,6,7};
	for(int i=0;i<10;i++){
		if(i==0){
			if(arr[i]>arr[i+1]){
				printf("peak element is %d found at %d\n",arr[i],i);
			}
		}
		else if(i==9){
			if(arr[i]>arr[i-1]){
				printf("peak element is %d found at %d\n",arr[i],i);
			}
		}
		else{
			if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
				printf("peak element is %d found at %d\n",arr[i],i);
			}
		}
		
	}
}
