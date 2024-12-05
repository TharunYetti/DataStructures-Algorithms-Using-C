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
void insertAtBegining(int val){
	dnode*nn=(dnode*)malloc(sizeof(dnode));
	if(!nn){
		printf("Memort not allocated\n");
		return;
	}
	nn->data=val;
	nn->Lptr=NULL;
	nn->Rptr=L;
	if(L==NULL) L=R=nn;
	else{
		L->Lptr=nn;
		L=nn;
	}
}
void insertAtEnd(int val){
	dnode*nn=(dnode*)malloc(sizeof(dnode));
	if(!nn){
		printf("Memort not allocated\n");
		return;
	}
	nn->data=val;
	nn->Lptr=R;
	nn->Rptr=NULL;
	if(R==NULL) L=R=nn;
	else {R=nn;R->Rptr=nn;}
}
void insertAfterGivenNode(int val){
	if(R->data==val){
		insertAtEnd(val);
		return;
	}
	int x;
	printf("ENter the data of reference node:");
	scanf("%d",&x);
	dnode*nn=(dnode*)malloc(sizeof(dnode));
	if(!nn){
		printf("Memort not allocated\n");
		return;
	}
	nn->data=val;
	dnode*M=L;
	while(M!=NULL && M->data!=x) M=M->Rptr;
	if(!M){
		printf("Reference node not found\n");
		exit(1);
	}
	nn->Lptr=M;
	nn->Rptr=M->Rptr;
	M->Rptr->Lptr=nn;
	M->Rptr=nn;
}
void insertBeforeGivenNode(int val){
	if(L->data==val){
		insertAtBegining(val);
		return;
	}
	int x;
	printf("ENter the data of the reference node:");
	scanf("%d",&x);
	dnode*nn=(dnode*)malloc(sizeof(dnode));
	if(!nn){
		printf("Memort not allocated\n");
		return;
	}
	nn->data=val;
	dnode*M=L;
	while(M!=NULL && M->data!=x) M=M->Rptr;
	if(!M){
		printf("Reference node not found\n");
		exit(1);
	}
	nn->Lptr=M->Lptr;
	nn->Rptr=M;
	M->Lptr->Rptr=nn;
	M->Lptr=nn;
}
void printDLL(){
	dnode* ptr=L;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->Rptr;
	}
}
void main(){
	printf("We are creating the doubly linked list\n");
	createDLL();
	int ch,data;
	printf("Insertion Operations\n1-insertAtBegining\n2-insertAtEnd\n3-insertBeforeGivenNode\n4-insertAfterGivenNode\nEnter:");
	scanf("%d",&ch);
	printf("Enter the data of newnode:");
	scanf("%d",&data);
	switch(ch){
		case 1:insertAtBegining(data);break;
		case 2:insertAtEnd(data);break;
		case 3:insertBeforeGivenNode(data);break;
		case 4:insertAfterGivenNode(data);break;
		default:printf("Babye\n");exit(1);
	}
	printDLL();
}
