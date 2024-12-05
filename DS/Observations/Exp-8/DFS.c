//graph implementation with adjacency list
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int edge;
	struct node*link;
}node;
typedef struct graph{
	int vertex;
	struct node*A;
	struct graph*next;
}graph;
int S[100],top=-1;
void push(int ele){
	if(top==10){
		printf("Overflow");return;
	}
	S[++top]=ele;
}
int pop(){
	if(top==-1){
		printf("Underflown");exit(1);
	}
	int n=S[top--];
	return n;
}
graph* createGraph(int v){
	int inc;
	printf("label those vertices with numbers or alphabets..let they will be alphabets like 1,2,3,etc\n");
	graph*head=NULL;
	graph*tempg=NULL;
	for(int i=1;i<=v;i++){
		graph *demog=(graph*)malloc(sizeof(graph));
		if(head==NULL) head=demog;
		else tempg->next=demog;
		demog->vertex=i;
		demog->A=NULL;
		node* temp=NULL;
		for(int j=1;j<=v;j++){
			if(j!=i){
				printf("Is the node %d incident with node %d(1-yes,0-no):",i,j);
				scanf("%d",&inc);
				if(inc==1){
					node* nd=(node*)malloc(sizeof(node));
					if(temp) temp->link=nd;
					else demog->A=nd;
					nd->edge=j;
					nd->link=NULL;
					temp=nd;
				}
			}
		}
		demog->next=NULL;
		tempg=demog;
	}
	return head;
}
void DFS(graph* head,int v){
	printf("Depth First Search Traversal:");
	graph*current=head;
	int arr[v];
	for(int i=0;i<v;i++) arr[i]=1;
	push(head->vertex);arr[0]=2;
	while(top!=-1){
		int n=pop();
		printf("%d ",n);
		arr[n-1]=3;
		current=head;
		while(current->vertex!=n) current=current->next;
		if(current!=NULL){
			node*ptr=current->A;
			while(ptr!=NULL){
				if(arr[ptr->edge-1]==1){
					push(ptr->edge);
					arr[ptr->edge-1]=2;
				}
				ptr=ptr->link;
			}
		}
	}
	//not working incase of a seprate node
}
void main(){
	int v;
	printf("Enter the no.of vertices does the graph have:");
	scanf("%d",&v);
	graph* head=createGraph(v);
	graph* current=head;
	DFS(head,v);
	printf("\n");
}
