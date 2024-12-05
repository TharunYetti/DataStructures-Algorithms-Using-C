#include <stdio.h>
#include <stdlib.h>
int DQ[4],f=-1,r=-1,size=4;
void insertFront(int ele){
	if((r+1)%size==f){
		printf("---------------->Overflown\n");return;
	}
	if(r==-1) f=size-1;
	else if(f==0) f=size-1;
	else f=f-1;
	DQ[f]=ele;
	if(r==-1) r=size-1;//no idea
}
void insertRear(int ele){
	if((r+1)%size==f){
		printf("----------------->overflown\n");return;
	}
	if(r==size-1) r=0;
	else r=r+1;
	DQ[r]=ele;
	if(f==-1 && r==0) f=0;
}
int deleteFront(){
	if(f==-1){
		printf("------------------>UnderFlown\n");exit(1);
	}
	int val=DQ[f];
	if(f==r) f=r=-1;
	else if(f==size-1) f=0;
	else f=f+1;
	return val;
}
int deleteRear(){
	if(r==-1){
		printf("-------------------->Underflwon\n");exit(1);	
	}
	int val=DQ[r];
	if(f==r) f=r=-1;
	else if(r==0) r=size-1;
	else r=r-1;
	return val;
}
void main(){
	printf("Now we are creating a DEQUE memory\n");
	int ch,val;
	printf("ENter\n1-to insertFront\n2-to insertRear\n3-to deleteFront\n4-to deleteRear\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insertFront into DQ\n");
				scanf("%d",&val);
				insertFront(val);
			}break;
			case 2:{
				printf("Enter a data to insertRear into DQ\n");
				scanf("%d",&val);
				insertRear(val);
			}break;
			case 3:{
				val=deleteFront();
				printf("%d is deleted from deleteFront DQ",val);
					
			}break;
			case 4:{
				val=deleteRear();
				printf("%d is deleted from deleteRear DQ",val);
			}
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insertFront\n2-to insertRear\n3-to deleteFront\n4-to deleteRear\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=4);
}
