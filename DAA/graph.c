//graph implementation with adjacency list
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int edge;
	int weight;
	struct node*link;
}node;
typedef struct graph{
	int vertex;
	struct node*A;
	struct graph*next;
}graph;
typedef struct set{
	int v;
	struct set*next;
}set;
graph* createGraph(int v){
	int inc;
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
					printf("Enter the weight of that edge:");
					scanf("%d",&nd->weight);
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
void printGraph(graph * head){
	graph *current=head;
	while(current!=NULL){
		printf("%d:",current->vertex);
		node*ptr=current->A;
		while(ptr!=NULL){
			printf("%d(%d) ",ptr->edge,ptr->weight);
			ptr=ptr->link;
		}
		current=current->next;
		printf("\n");
	}
}
int find(int v1,set** sets,int v){
	for(int i=0;i<v;i++){
		set *j=sets[i];
		while(j!=NULL){
			if(v1==j->v) return sets[i]->v;
			j=j->next;
		}
	}
	return -1;
}
void combine(int v1,int v2,set** sets,int v){
	/*
	if(find(v1,sets,v)!=v1 && find(v2,sets,v)==v2){
		int m=find(v1,sets,v);
		for(int i=0;i<v;i++){
			if(sets[i]!=NULL && sets[i]->v==m){
				set *j=sets[i];
				while(j->next!=NULL){
					j=j->next;
				}
				set *n=(set*)malloc(sizeof(set));
				n->v=v2;
				n->next=NULL;
				j->next=n;
				sets[v2-1]=NULL;
			}
		}
	}
	else if(find(v2,sets,v)!=v2 && find(v1,sets,v)==v1){
		int m=find(v2,sets,v);
		for(int i=0;i<v;i++){
			if(sets[i]!=NULL && sets[i]->v==m){
				set *j=sets[i];
				while(j->next!=NULL){
					j=j->next;
				}
				set *n=(set*)malloc(sizeof(set));
				n->v=v1;
				n->next=NULL;
				j->next=n;
				sets[v2-1]=NULL;
			}
		}
	}
	*/
//	else{
		int m=find(v2,sets,v);
		if(find(v1,sets,v)<find(v2,sets,v)) m=find(v1,sets,v);
		for(int i=0;i<v;i++){
			if(sets[i]!=NULL && sets[i]->v==m){
				set *j=sets[i];
				while(j->next!=NULL){
					j=j->next;
				}
				if(find(v1,sets,v)<find(v2,sets,v)){j->next=sets[v2-1];sets[v2-1]=NULL;}
				else {j->next=sets[v1-1];sets[v1-1]=NULL;}
			}
		}
//	}
}
void main(){
	int v,e;
	printf("Enter the no.of vertices does the graph have:");
	scanf("%d",&v);
	printf("Enter the no.of edges does the graph have:");
	scanf("%d",&e);
	printf("label those vertices with numbers or alphabets..let they will be alphabets like 1,2,3,etc\n");
	graph *head=createGraph(v);
//	printf("The adjacency list of the given graph is as follows\n");
//	printGraph(head);
	
	//making edges array
	int edges[e][3],t=0;
	graph*current=head;
	while(current!=NULL){
		node* ptr=current->A;
		while(ptr!=NULL){
			int isAlreadyPresent=0;
			for(int k=0;k<t;k++){
				if( (edges[k][0]==current->vertex && edges[k][1]==ptr->edge)||(edges[k][0]==ptr->edge && edges[k][1]==current->vertex)){
					isAlreadyPresent=1;break;
				}
			}
			if(isAlreadyPresent==0){
				edges[t][0]=current->vertex; edges[t][1]=ptr->edge; edges[t][2]=ptr->weight;
				t++;
			}
			ptr=ptr->link;
		}
		current=current->next;
	}
	int edgesCount=t;
//	for(int i=0;i<edgesCount;i++){
//		printf("Edge-%d:(%d-%d)%d\n",i+1,edges[i][0],edges[i][1],edges[i][2]);
//	}
	
	//KRUSKALS ALGO
	int A[v][3],finalSize=0;
	set* sets[v];
	for(int i=0;i<v;i++){
		//make-disjoint-set(v);
		set *n=(set*)malloc(sizeof(set));
		n->v=i+1;
		n->next=NULL;
		sets[i]=n;
	}
	
	//sorting edges in increasing order
	for(int i=1;i<edgesCount;i++){
		int temp[3];
		temp[0]=edges[i][0];temp[1]=edges[i][1];temp[2]=edges[i][2];
		int j=i-1;
		while(j>=0 && edges[j][2]>temp[2]){
			edges[j+1][0]=edges[j][0];
			edges[j+1][1]=edges[j][1];
			edges[j+1][2]=edges[j][2];
			j--;
		}
		edges[j+1][0]=temp[0];edges[j+1][1]=temp[1];edges[j+1][2]=temp[2];
	}
//	for(int i=0;i<edgesCount;i++){
//		printf("Edge-%d:(%d-%d)%d\n",i+1,edges[i][0],edges[i][1],edges[i][2]);
//	}
	
	for(int i=0;i<edgesCount;i++){
		if( find(edges[i][0],sets,v) != find(edges[i][1],sets,v) ){
			A[finalSize][0]=edges[i][0];
			A[finalSize][1]=edges[i][1];
			A[finalSize++][2]=edges[i][2];
			combine(edges[i][0],edges[i][1],sets,v);
		}
	}
	printf("The minimum cost spanning tree is { ");
	for(int i=0;i<finalSize;i++){
		printf("(%d-%d)%d, ",A[i][0],A[i][1],A[i][2]);
	}
	printf("\b\b }\n");
}

/*
	for(int i=0;i<edgesCount-1;i++){
		for(int j=0;j<edgesCount-1-i;j++){
			if(edges[j][2]>edges[j+1][2]){
				int temp[3];
				temp[0]=edges[j][0];temp[1]=edges[j][1];temp[2]=edges[j][2];
				edges[j][0]=edges[j+1][0];edges[j][1]=edges[j+1][1];edges[j][2]=edges[j+1][2];
				edges[j+1][0]=temp[0];edges[j+1][1]=temp[1];edges[j+1][2]=temp[2];
			}
		}
	}
	*/
