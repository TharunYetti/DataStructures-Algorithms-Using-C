#include <stdio.h>
void main(){
	int a[]={2,3,4,5,6,7},n=6,del;
	printf("ENter the element to delete:");
	scanf("%d",&del);
	for(int i=del;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
}
