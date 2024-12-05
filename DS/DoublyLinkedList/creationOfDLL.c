#include <stdlib.h>
#include <stdio.h>
typedef struct dnode{
	struct dnode*Lptr;
	int data;
	struct dnode*Rptr;
}dnode;
dnode*L=NULL,*R=NULL;
void createDLL(){
	int ch;
	do{
		dnode*nn=(dnode*)malloc(sizeof(dnode));
		if(!nn){
			printf("Memory not allocated\n");
			return;
		}
		printf("ENter data:");
		scanf("%d",&nn->data);
		if(!L & !R){
			L=R=nn;
			nn->Lptr=nn->Rptr=NULL;
		}
		else{
			R->Rptr=nn;
			nn->Lptr=R;
			nn->Rptr=NULL;
			R=nn;
		}
		printf("Do you want to cotinue(1-for continue,0-for exit):");
		scanf("%d",&ch);
	}while(ch==1);
}
void main(){
	printf("We are creating the doubly linked list\n");
	createDLL();
	dnode* ptr=L;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->Rptr;
	}
}
