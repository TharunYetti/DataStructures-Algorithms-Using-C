#include <stdio.h>
void main(){
	int a[]={10,9,8,7,6,5,4,3,2,1},n=10;
	for(int i=0;i<n-1;i++){
		int isorder=0;
		for(int j=0;j<n-1-i;j++){
			int temp;
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				isorder=1;
			}
		}
		if(!isorder && i==0){
			printf("Already in sorted stage\n");
			break;
		}
	}
	printf("FInl array is\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\b \n");
}
