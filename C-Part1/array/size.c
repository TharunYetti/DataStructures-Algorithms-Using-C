//finding length of a array
#include <stdio.h>
void main(){
	int arr[]={2,3,4,5,6,7,8,55,66,34,33,78,3,4,5,3,4},size=0;
	for(int i=0;;i++){
		if(arr[i]>=0)
			size+=1;
		else
			break;
	}
	int k=0;
	while(arr[k]!='\0'){
		k++;
	}
	printf("SIze of the array is %ld\n",sizeof(arr)/sizeof(int));
	printf("%d\n",arr[13]);
}
