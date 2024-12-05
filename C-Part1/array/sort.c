//sorting an array (bubble sorting)
#include <stdio.h>
void main(){
	int arr[]={4,1,7,2,5,9},size,temp=0;
	int total_bytes=sizeof(arr);
	size=total_bytes/4;
	printf("Size is %d\n",size);
	int isorder=1;
	for(int i=0;i<(size-1);i++){ //(size-1) comparisons are required to sort an array
		isorder=0;
		for(int j=0;j<(size-1-i);j++){ //for each iteration we are minimising the array by skipping its last element 
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				isorder=1;
			}
		}
		if( i==0 && isorder==0 )
			printf("Sorted");break;
	}
	printf("{");
	for(int k=0;k<size;k++){
		printf("%d,",arr[k]);
	}
	printf("\b}\n");
}
