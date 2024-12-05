#include <stdio.h>
void search(int[],int,int,int);
void main(){
	printf("HOw many numbers do you want to enter:");
	int n,find;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("ENter element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&find);
	search(arr,0,n,find);
}
void search(int arr[],int i,int n,int find){
	int low=i,high=n;
	if(low<high){
		int mid=low+high/2;
		if(arr[mid]==find){
			printf("ELement found at %d\n",mid);
			return;
		}
		else if(arr[mid]>find){
			high=mid-1;
			search(arr,low,high,find);
		}
		else{
			low=mid+1;
			search(arr,low,high,find);
		}
	}
	else
		printf("NOt found\n");
}
