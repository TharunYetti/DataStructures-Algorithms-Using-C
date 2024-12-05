#include <stdio.h>
void main(){
	printf("\n");
	int i,j,arr[5]={2,5,7,35,9},temp=0,size=5;
	printf("The Given Array : {");
	for(int k=0;k<5;k++)
		printf("%d,",arr[k]);
	printf("\b}\n");
	for(i=0;i<(size-1);i++){
		for(j=0;j<(size-1-i);j++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	printf("THe Second Largest NUmber is %d positioned at %d\n",arr[size-2],(size-2));
	printf("THe Second Smallest NUmber is %d positioned at %d\n",arr[1],1);
	printf("\n");
}
