#include <stdio.h>
void main(){
	int arr[10]={2,3,7,4,7,9,4,2,6,7},isfound=1;
	for(int i=0;i< 10 && isfound!=0 ;i++){
		for(int j=0;j<10 && isfound!=0 ;j++){
			if(arr[i]==arr[j] && j!=i){
				printf("%d is the first repeating element positioned at %d\n",arr[j],j);
				isfound=0;
			}
		}
	}
}
