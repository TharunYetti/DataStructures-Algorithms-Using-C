#include <stdio.h>
void main(){
	printf("Enter the size of integer array:");
	int n,find;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to search:");
	scanf("%d",&find);
	int low=0,high=n-1,isfound=0;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==find){
			printf("FOund at %d\n",mid);
			isfound=1;
			break;
		}
		else if(arr[mid]>find)
			high=mid-1;
		else
			low=mid+1;
	}
	if(isfound==0){
		printf("Element not found\n");
	}


	/*
	//linear search
	printf("Enter the size of integer array:");
	int n,find;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to search:");
	scanf("%d",&find);
	for(int i=0;i<n;i++){
		if(arr[i]==find)
			printf("number found at position %d\n",i);
	}
	*/
}
