//swapping small ad largs umner in an array
#include <stdio.h>
void main(){
	int arr[7]={3,2,4,56,9,5,7},small,large,s_pos,l_pos,i,j,k,temp;
	small=arr[0];large=arr[6];
	int size=7;
	printf("Intial Array : {");
	for(j=0;j<7;j++)
		printf("%d,",arr[j]);
	printf("\b}\n");
	for(i=0;i<size;i++){
		if(arr[i]<small){
			small=arr[i];
			s_pos=i;
		}
		else if(arr[i]>large){
			large=arr[i];
			l_pos=i;
		}
		else
			continue;
	}
	temp=arr[s_pos];
	arr[s_pos]=arr[l_pos];
	arr[l_pos]=temp;
	printf("Final Array : {");
	for(k=0;k<7;k++){
		printf("%d,",arr[k]);
	}
	printf("\b}\n");
}
