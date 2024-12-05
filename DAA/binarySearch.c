//binary search
#include <stdio.h>
int mid;
int binarySearch(int*A,int l,int h,int key){
	if(l<=h){
		mid=(l+h)/2;
		if(key<A[mid]) return binarySearch(A,l,mid-1,key);
		else if(key>A[mid]) return binarySearch(A,mid+1,h,key);
		else return mid;
	}
	return -1;
}
void main(){
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter the element %d:",i+1);
		scanf("%d",&A[i]);
	}
	int key;
	printf("Enter the key you want to search for:");
	scanf("%d",&key);
	int ans=binarySearch(A,0,n-1,key);
	printf("%d\n",ans);
	
}
