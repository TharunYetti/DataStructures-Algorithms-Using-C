#include <stdio.h>
int binarySearch(int* A,int n,int key){
	int l=0,h=n-1,mid;
	while(l<=h){
		mid=(l+h)/2;
		if(key<A[mid]) h=mid-1;
		else if(key>A[mid]) l=mid+1;
		else return mid;
	}
	return -1;
}
void main(){
	int n,ans;
	printf("Enter the array size:");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter the element %d:",i+1);
		scanf("%d",&A[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&ans);
	ans=binarySearch(A,n,ans);
	if(ans!=-1)	printf("Element found at %d\n",ans);
	else	printf("Element not found\n");
}
