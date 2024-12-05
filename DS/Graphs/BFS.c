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
int Q[100],f=-1,r=-1,size=100;
void enqueue(int ele){
	if(r==size-1){
		printf("Queue is overflown\n");
		exit(1);
	}
	r=r+1;
	Q[r]=ele;
	if(f==-1 && r==0)
		f=0;
}
int dequeue(){
	int val;
	if(f==-1){
		printf("queue is underflown\n");
		exit(1);
	}
	val=Q[f];
	if(f==r){
		f=-1;
		r=-1;
	}
	else
		f=f+1;
	return val;
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
void BFS(graph* head,int v){
	printf("Breadth First Search Traversal:");
	graph *current=head;
	int status[v];
	for(int i=0;i<v;i++) status[i]=1;
	enqueue(head->vertex);status[0]=2;
	while(f!=-1){
		int n=dequeue();
		printf("%d ",n);
		status[n-1]=3;
		current=head;
		while(current->vertex!=n) current=current->next;
		if(current!=NULL){
			node*ptr=current->A;
			while(ptr!=NULL){
				if(status[ptr->edge-1]==1){
					enqueue(ptr->edge);
					status[ptr->edge-1]=2;
				}
				ptr=ptr->link;
			}
		}
	}
}
void main(){
	int v;
	printf("Enter the no.of vertices does the graph have:");
	scanf("%d",&v);
	graph* head=createGraph(v);
	graph* current=head;
	BFS(head,v);
	printf("\n");
}
