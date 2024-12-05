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
		dnode*n=(dnode*)malloc(sizeof(dnode));
		if(!n){
			printf("Memory not allocated\n");
			return;
		}
		printf("ENter data:");
		scanf("%d",&n->data);
		if(!L & !R){
			L=R=n;
			n->Lptr=n->Rptr=NULL;
		}
		else{
			R->Rptr=n;
			n->Lptr=R;
			n->Rptr=NULL;
			R=n;
		}
		printf("Do you want to cotinue(1-for continue,0-for exit):");
		scanf("%d",&ch);
	}while(ch==1);
}
void printDLL(){
	dnode* ptr=L;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->Rptr;
	}
}
void sortInAscending(){
	dnode*ptr1,*ptr2;
	ptr1=L;
	while(ptr1->Rptr!=NULL){
		ptr2=ptr1->Rptr;
		while(ptr2!=NULL){
			if(ptr1->data>ptr2->data){
				int temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->Rptr;
		}
		ptr1=ptr1->Rptr;
	}
	printf("Sorted in Ascending order\n");
}
void main(){
	createDLL();
	sortInAscending();
	printDLL();
	dnode*nn=(dnode*)malloc(sizeof(dnode));
	if(!nn){
		printf("Memory not allocated\n");exit(1);
	}
	printf("Enter the data of the New Node to be inserted:");
	scanf("%d",&nn->data);
	if(L->data>nn->data){
		nn->Lptr=NULL;
		nn->Rptr=L;
		L->Lptr=nn;
		if(L==NULL) L=R=nn;
		else L=nn;
	}
	else{
		dnode*ptr=L;
		while(ptr!=NULL && ptr->data<nn->data) ptr=ptr->Rptr;
		if(!ptr){
			nn->Lptr=R;
			nn->Rptr=NULL;
			R->Rptr=nn;
			if(R==NULL) L=R=nn;
			else R=nn;
		}
		else{
			nn->Lptr=ptr->Lptr;
			nn->Rptr=ptr;
			ptr->Lptr->Rptr=nn;
			ptr->Lptr=nn;
		}
	}
	printDLL();
}
