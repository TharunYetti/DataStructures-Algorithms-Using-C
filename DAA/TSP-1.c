#include<stdio.h>
int cost=0;
void TSP(int s ,int n,int tsp[n][n],int visited[n]){
	int min=999,adj=999;
	visited[s]=1;
	printf("%d ",s+1);
	for(int k=0;k<n;k++){
		if(tsp[s][k]!=0 && visited[k]==0){
			if(tsp[s][k]<min){
				min=tsp[s][k];
				adj=k;
			}
		}
	}
	if(min!=999){
		cost=cost+min;
	}
	if(adj==999){
		adj=0;
		printf("%d",adj+1);
		cost=cost+tsp[s][adj];
		return;
	}
	TSP(adj,n,tsp,visited);
}
void main(){
	int s,n;
	printf("Enter the no. of nodes:");
	scanf("%d",&n);
	int tsp[n][n],visited[n];
	for(int i=0;i<n;i++){
		printf("Enter the %d-row elements :",i+1);
		for(int j=0;j<n;j++){
			scanf("%d",&tsp[i][j]);
		}
	}	
	for(int i=0;i<n;i++){
		visited[i]=0;
	}
	printf("shortest path :");
	TSP(0,n,tsp,visited);
	printf("\nminimum cost is: %d\n",cost);
}
