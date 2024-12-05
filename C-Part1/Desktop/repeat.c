#include <stdio.h>
void main(){
	int arr[10]={2,3,4,5,2,3,4,2,5,4},n=10;
	for(int i=0;i<10;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j] && i!=j){
				count++;
			}
		}
		int check=0;
		for(int k=i;k>0;k--){
			if(arr[i]==arr[k-1]){
				check++;
			}
		}
		if(check==0 && count!=0){
			printf("%d is repeated,its duplicate arrived %d time(s)\n",arr[i],count);
		}
	}
}
