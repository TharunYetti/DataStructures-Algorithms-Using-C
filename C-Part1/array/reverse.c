#include <stdio.h>
void main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9},new[10];
	for(int i=0;i<10;i++){
		new[9-i]=arr[i];
	}
	printf("THe reversed array is {");
	for(int i=0;i<10;i++){
		printf("%d,",new[i]);
	}
	printf("\b}\n");
}
