//searching over an array
#include <stdio.h>
void main(){
	int arr[5]={2,3,4,5,6},num,found=0;
	printf("ENter a number to search:");
	scanf("%d",&num);
	for(int i=0;i<5;i++){
		if(arr[i]==num){
			found+=1;
			printf("The number is found at position %d",i);
		}
	}
	if(found==0){
		printf("\nNo match found\n");
	}
}
