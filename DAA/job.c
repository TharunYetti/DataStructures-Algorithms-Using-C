#include <stdio.h>
int B[100][3];
void merge(int a[][3],int l,int m,int h){
	int i=l,j=m+1,k=l;
	while(i<=m && j<=h){
		if(a[i][1]>a[j][1]){
			B[k][0]=a[i][0];
			B[k][1]=a[i][1];
			B[k++][2]=a[i++][2];
		}
		else{
			B[k][0]=a[j][0];
			B[k][1]=a[j][1];
			B[k++][2]=a[j++][2];
		}
	}
	while(i<=m){
			B[k][0]=a[i][0];
			B[k][1]=a[i][1];
			B[k++][2]=a[i++][2];
	}
	while(j<=h){
			B[k][0]=a[j][0];
			B[k][1]=a[j][1];
			B[k++][2]=a[j++][2];
	}
	for(int t=l;t<k;t++){
		a[t][0]=B[t][0];
		a[t][1]=B[t][1];
		a[t][2]=B[t][2];
	};
}
void mergeSort(int a[][3],int l,int h){
	if(l<h){
		int m=(l+h)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,h);
		merge(a,l,m,h);
	}
}
void printJobs(int jobs[][3],int n){
	printf("\nJobs     :");
	for(int i=0;i<n;i++){
		printf("  J%d  ",jobs[i][0]);
	}
	printf("\nProfit   :");
	for(int i=0;i<n;i++){
		printf(" %d  ",jobs[i][1]);
	}
	printf("\nDeadLine :");
	for(int i=0;i<n;i++){
		printf("  %d  ",jobs[i][2]);
	}
	printf("\n");
}
void printSlots(int slots[],int n){
	printf("\nSlots   :");
	for(int i=0;i<n;i++){
		if(slots[i]!=-1)printf("J%d  ",slots[i]);
		else printf("-- ");
	}
	printf("\n");
}
void main(){
	printf("How many jobs do you want to enter:");
	int n;
	scanf("%d",&n);
	int jobs[n][3];
	int dl=0;
	for(int i=0;i<n;i++){
		jobs[i][0]=i+1;
		printf("Enter the profit of job %d:",i+1);
		scanf("%d",&jobs[i][1]);
		printf("Enter the dead line of job %d:",i+1);
		scanf("%d",&jobs[i][2]);
		if(jobs[i][2]>dl) dl=jobs[i][2];
	}
	mergeSort(jobs,0,n-1);
	printJobs(jobs,n);
	int slot[dl];
	for(int i=0;i<dl;i++){
		slot[i]=-1;
	}
	for(int i=0;i<n;i++){
		for(int j=jobs[i][2]-1;j>=0;j--){
			if(slot[j]==-1){
				slot[j]=jobs[i][0];
				break;
			}
		}
	}
	printSlots(slot,dl);
}
