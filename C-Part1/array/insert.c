//insert in an array
#include <stdio.h>
void main(){
	int size=10,arr[size],n,num,pos,num2,temp;
	printf("How many elements do you want to enter (1-10):");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("ENter element value at a[%d]:",i);
		scanf("%d",&num);
		arr[i]=num;
	}
	if(n<size){
		printf("Enter the position of element where to be placed:");
		scanf("%d",&pos);
		for(int i=n;i>pos;i--){
			arr[i]=arr[i-1];
		}
		printf("Enter the element you want to insert:");
		scanf("%d",&num2);
		arr[pos]=num2;
		n++;
		printf("Inserted!");
		printf("Enter 1 to see or 0 to not:");
		scanf("%d",&temp);
		if(temp==1){
			printf("{");
			for(int i=0;i<n;i++){
				printf("%d,",arr[i]);
			}
			printf("\b}\n");
		}
	}
	else{
		printf("Array is FUll!! NO sufficient space!\n");
	}
}
