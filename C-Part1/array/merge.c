//merging
#include <stdio.h>
void main(){
	int i,j,count=0;
	int arr1[3]={2,3,4},arr2[5]={5,6,7,8,9},arr3[8];
	for(i=0;i<3;i++){
		arr3[count]=arr1[i];
		count+=1;
	}
	for(j=0;j<5;j++){
		arr3[count]=arr2[j];
		count+=1;
	}
	printf("{");
	for(int k=0;k<8;k++){
		printf("%d,",arr3[k]);
	}
	printf("\b}\n");
	
}
