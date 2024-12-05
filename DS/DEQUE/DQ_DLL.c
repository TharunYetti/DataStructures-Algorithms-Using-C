#include <stdio.h>
#include <stdlib.h>
typedef struct dnode{
	struct dnode*Lptr;
	int data;
	struct dnode*Rptr;
}dnode;
dnode *f=NULL,*r=NULL;
void insertFront(int ele){
	dnode*nd=(dnode*)malloc(sizeof(dnode));
	if(!nd){
		printf("Memory Not allocated\n");return;
	}
	nd->data=ele;
	nd->Lptr=nd->Rptr=NULL;
	if(f==NULL){
		f=r=nd;
	}
	else{
		f->Lptr=nd;
		nd->Rptr=f;
		f=nd;
	}
}
void insertRear(int ele){
	dnode*nd=(dnode*)malloc(sizeof(dnode));
	if(!nd){
		printf("Memory Not allocated\n");return;
	}
	nd->data=ele;
	nd->Lptr=nd->Rptr=NULL;
	if(r==NULL){
		f=r=nd;
	}
	else{
		r->Rptr=nd;
		nd->Lptr=r;
		r=nd;
	}	
}
int deleteFront(){
	if(!f){
		printf("underflown\n");exit(1);
	}
	int val=f->data;
	dnode*temp=f;
	f=f->Rptr;
	if(!f) r=NULL;
 	else f->Lptr=NULL;
	free(temp);
	return val;
}
int deleteRear(){
	if(r==NULL){
		printf("underflown\n");exit(1);
	}
	int val=f->data;
	dnode*temp=r;
	r=r->Lptr;
	if(!r) f=NULL;
	else r->Rptr=NULL;
	free(temp);
	return val;
}
void main(){
	printf("Now we are creating a DEQUE memory(using DLL)\n");
	int ch,val;
	printf("ENter\n1-to insertFront\n2-to insertRear\n3-to deleteFront\n4-to deleteRear\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insertFront into DQ:");
				scanf("%d",&val);
				insertFront(val);
			}break;
			case 2:{
				printf("Enter a data to insertRear into DQ:");
				scanf("%d",&val);
				insertRear(val);
			}break;
			case 3:{val=deleteFront();
				printf("%d is deleted from deleteFront DQ",val);
			}break;
			case 4:{val=deleteRear();
				printf("%d is deleted from deleteFront DQ",val);
			}break;
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insertFront\n2-to insertRear\n3-to deleteFront\n4-to deleteRear\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=4);
}
