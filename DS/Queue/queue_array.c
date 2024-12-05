#include <stdio.h>
#include <stdlib.h>
int size=10,Q[10],f=-1,r=-1;
void enqueue(int ele){
	if(r==size-1){
		printf("Memory Overflown");
		return;
	}
	r=r+1;
	Q[r]=ele;
	if(f==-1 && r==0)
		f=0;
}
int dequeue(){
	if(f==-1){
		printf("Memory Overflown");
		exit(1);
	}
	int ele=Q[f];
	if(f==r){
		f=-1;r=-1;
	}
	else
		f=f+1;
	return ele;
}
void main(){
	printf("Now we are creating a Queue memory\n");
	int ch;
	printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to print the Statck data\n4-to exit out\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insert into stack\n");
				scanf("%d",&val);
				enqueue(val);
			}break;
			case 2:{
				val=dequeue();
				printf("%d is deleted form the stack\n",val);
			}break;
			case 3:{
				for(int i=f;i<=r;i++)
					printf("%d\n",Q[i]);
			}break;
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to print the Statck data\n4-to exit out\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=3);
}
