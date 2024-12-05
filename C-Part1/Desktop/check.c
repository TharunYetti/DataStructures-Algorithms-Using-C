#include <stdio.h>
void main(){
	int arr[10]={1,1,2,2,2,3,2,3,3,1};
	for(int i=0;i<10;i++){
		int count=0;
		for(int j=0;j<10;j++){
			if(arr[i]==arr[j] && i!=j)
				count++;
		}
		int check=0;
		for(int k=i-1;k>0;k--){
			if(arr[i]==arr[k])
				check++;
		}
		if(check==0 && count!=0)
			printf("%d is repeated,its duplicate came %d times\n",arr[i],count);
	}
}
