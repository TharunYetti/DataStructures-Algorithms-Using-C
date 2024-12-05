//deleting in an array
#include <stdio.h>
void main(){
	int size=5,arr[size],n,num,del,pos,temp;
	printf("ENter FIVE elments.\n");
	for(int i=0;i<size;i++){
		printf("ENter element value at a[%d]:",i);
		scanf("%d",&num);
		arr[i]=num;
	}
	printf("ENter the element you want to delete:");
	scanf("%d",&del);
	for(int i=0;i<size;i++){
		if(arr[i]==del){
			pos=i;
			break;
		}
	}
	for(int j=pos;j<size;j++)
		arr[j]=arr[j+1];
	size--;
	printf("Successfully deleted! Enter 1 to check the array or 0 to not:");
	scanf("%d",&temp);
	if(temp==1){
		printf("{");
		for(int i=0;i<size;i++){
			printf("%d,",arr[i]);
		}
		printf("\b}\n");
	}
	
}
