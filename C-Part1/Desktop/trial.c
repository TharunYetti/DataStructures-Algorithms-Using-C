#include <stdio.h>
void main(){
	int arr[5]={2,3,9,8,7},size=5,i,j,k,small=arr[0],large=arr[4],l_pos,s_pos;
	for(i=0;i<size;i++){
		if(arr[i]>large){
			large=arr[i];
			l_pos=i;
		}
		else if(arr[i]<small){
			small=arr[i];
			s_pos=i;
		}
	}
	for(j=s_pos;j<(size-1);j++){
		arr[j]=arr[j+1];
	}
	size--;
	for(k=(l_pos-1);k<(size-1);k++){
		arr[k]=arr[k+1];
	}
	size--;
	for(int l=0;l<(size);l++){
		printf("%d,",arr[l]);
	}
	printf("\nSmall is %d\nLarge is %d\n",small,large);
}
