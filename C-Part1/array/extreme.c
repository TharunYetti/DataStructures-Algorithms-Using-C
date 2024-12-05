#include <stdio.h>
void main(){
	int arr[5]={1,2,3,4,5};
	int small=arr[0],large=arr[4];
	for(int i=0;i<5;i++){
		if(arr[i]<small)
			small=arr[i];
		else if(arr[i]>large)
			large=arr[i];
	}
	printf("Large:\t%d\nSmall:\t%d\n",large,small);
}
