//binary searching to reduce number of comparisions
#include <stdio.h>
void main(){
	int arr[]={1,2,3,4,5,6,7},size,mid,num,low,high,isfound;//first of all the array should be a sorted order otherwise we cant do binary searching
	int total_bytes=sizeof(arr);
	size=total_bytes/2;
	low=0;
	high=size-1;
	printf("Enter the number you awnt to search:");
	scanf("%d",&num);
	while(low<=high){
		isfound=0;
		mid=(low+high)/2;
		if(arr[mid]==num){
			printf("%d is found at %d position\n",num,mid);
			isfound=1;
			break;
		}
		if(arr[mid]>num)
			high=mid-1;
		else
			low=mid+1;
	}
	if(!isfound){
		printf("Not FOund\n");
	}
		
}
