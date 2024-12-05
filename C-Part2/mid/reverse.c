#include <stdio.h>
void main(){
	int a[]={1,2,3,4,5,6},n=6;
	int start=0,end=n-1;
	while(end!=(n/2-1)){
		int temp;
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
