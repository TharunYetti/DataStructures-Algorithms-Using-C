#include <stdio.h>
void main(){
	int a1[10]={1,2,3,4,5},a2[]={6,7,8},n1=5,n2=3;
	int i,j;
	for(i=n1,j=0;i<n1+n2 && j<n2;i++,j++){
		a1[i]=a2[j];
	}
	for(int k=0;k<n1+n2;k++){
		printf("%d ",a1[k]);
	}
}
