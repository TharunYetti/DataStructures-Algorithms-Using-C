#include <stdio.h>
#include <stdlib.h>
int size=10,q[10],f=-1,r=-1;
void push(int ele){
	if(r==size-1){
		printf("Queue is overflown\n");
		exit(1);
	}
	r=r+1;
	q[r]=ele;
	if(f==-1 && r==0)
		f=0;
}
int pop(){
	int val;
	if(f==-1){
		printf("queue is underflown\n");
		exit(1);
	}
	val=q[f];
	if(f==r){
		f=r=-1;
	}
	else
		f=f+1;
	return val;
}
void main(){
	printf("Now we are creating a stack memory\n");
	int ch;
	printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to print the Statck data\n4-to exit out\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insert into stack\n");
				scanf("%d",&val);
				push(val);
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
