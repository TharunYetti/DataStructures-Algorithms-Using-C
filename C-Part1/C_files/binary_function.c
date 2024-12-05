#include <stdio.h>
int search(int[],int,int,int);
void main(){
	int a[5]={2,3,4,5,6},n=5,low=0,high=4,num;
	printf("Enter a number:");
	scanf("%d",&num);
	int k=search(a,num,0,4);
	(k>=0)?printf("The element found at %d\n",k):printf("Element not found\n");
}
int search(int a[],int num,int low,int high){
	if(low<=high){
		int mid=low+high/2;
		if(a[mid]==num)
			return mid;
		else if(a[mid]>num){
			high=mid-1;
			search(a,num,low,high);
		}
		else{
			low=mid+1;
			search(a,num,low,high);
		}
	}
	return -1;
}
