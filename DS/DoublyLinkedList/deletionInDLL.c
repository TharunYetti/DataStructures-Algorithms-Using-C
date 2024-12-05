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
		if(!L && !R){
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
void deleteFirstNode(){
	dnode* temp=L;
	L=L->Rptr;
	L->Lptr=NULL;
	printf("%d is deleted from DLL\n",temp->data);
	free(temp);
}
void deleteLastNode(){
	dnode* temp=R;
	R=R->Lptr;
	R->Rptr=NULL;
	printf("%d is deleted form DLL\n",temp->data);
	free(temp);
}
void deleteGivenNode(int val){
	dnode *ptr=L;
	while(ptr!=NULL && ptr->data!=val) ptr=ptr->Rptr;
	if(!ptr){
		printf("No node found with that data\n");
		return;
	}
	ptr->Lptr->Rptr=ptr->Rptr;
	ptr->Rptr->Lptr=ptr->Lptr;
	printf("%d is deleted from DLL\n",ptr->data);
	free(ptr);
}
void deleteNodeAfterGivenNode(int val){
	dnode*ptr=L;
	while(ptr!=NULL && ptr->data!=val) ptr=ptr->Rptr;
	if(!ptr || ptr==R){
		printf("No node found with that data\n");
		return;
	}
	else if(ptr->Rptr==R) deleteLastNode();
	else{
		dnode*temp=ptr->Rptr;
		ptr->Rptr=temp->Rptr;
		temp->Rptr->Lptr=ptr;
		printf("%d is deleted from DLL\n",temp->data);
		free(temp);
	}
}
void deleteNodeBeforeGivenNode(int val){
	dnode*ptr=L;
	while(ptr!=NULL && ptr->data!=val) ptr=ptr->Rptr;
	if(!ptr || ptr==L){
		printf("No node found with that data\n");
		return;
	}
	else if(ptr==L->Rptr) deleteFirstNode();
	else{
		dnode*temp=ptr->Lptr;
		temp->Lptr->Rptr=ptr;
		ptr->Lptr=temp->Lptr;
		printf("%d is deleted from DLL\n",temp->data);
		free(temp);
	}
}
void main(){
	printf("We are creating the doubly linked list\n");
	createDLL();
	int ch,data;
	printf("Insertion Operations\n1-deleteFirstNode\n2-deleteLastNode\n3-deleteGivenNode\n4-deleteNodeAfterGivenNode\n5-deleteNodeBeforeGivenNode\nother-to exit\nEnter:");
	scanf("%d",&ch);
	switch(ch){
		case 1:deleteFirstNode();printDLL();break;
		case 2:deleteLastNode();printDLL();break;
		case 3:{
			printf("Enter the data of node to be deleted:");
			scanf("%d",&data);
			deleteGivenNode(data);
			printDLL();
		}break;
		case 4:{
			printf("Enter the data of reference node:");
			scanf("%d",&data);
			deleteNodeAfterGivenNode(data);
			printDLL();
		}break;
		case 5:{
			printf("Enter the data of reference node:");
			scanf("%d",&data);
			deleteNodeBeforeGivenNode(data);
			printDLL();
		}break;
		default:printf("Babye\n");
	}
}
