#include <stdio.h>
void main(){
	int a[5]={1,2,3,4,5},n=5;
	int start=0,end=n-1,temp;
	while(end!=(n/2-1)){
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
