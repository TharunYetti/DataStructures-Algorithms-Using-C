#include <stdio.h>
void main(){
	int arr[10]={2,3,7,4,7,9,4,2,6,1},arr2[10]={2,5,8,5,46,35,23,8,5,1},inter[10],k=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(arr[i]==arr2[j]){
				inter[k]=arr[i];
				k++;
			}
		}
	}
	printf("THe intersection is { ");
	for(int i=0;i<k;i++){
		printf("%d,",inter[i]);
	}
	printf("\b }\n");
}
