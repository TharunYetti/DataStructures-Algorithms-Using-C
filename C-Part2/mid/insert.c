#include <stdio.h>
void main(){
	int a[10]={1,2,3,4,5},n=5,ele,pos;
	int i;
	if(n<10){
		printf("Enter the element and its position where you want to insert:");
		scanf("%d %d",&ele,&pos);
		for(i=n;i>pos;i--){
			a[i]=a[i-1];
		}
		a[pos]=ele;
		n++;
	}
	else
		printf("Array is Full\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
