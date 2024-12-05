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
void printSlots(int slots[],int n){
	printf("\nSlots   :");
	for(int i=0;i<n;i++){
		if(slots[i]!=-1)printf("J%d  ",slots[i]);
		else printf("-- ");
	}
	printf("\n");
}
void main(){
	int n,dl=0;
	printf("Enter no.of A:");
	scanf("%d",&n);
	int A[n][3];
	for(int i=0;i<n;i++){
		A[i][0]=i+1;
		printf("Enter the profit & deadline of job-%d:",i+1);
		scanf("%d %d",&A[i][1],&A[i][2]);
		if(A[i][2]>dl) dl=A[i][2];
	}
	int slot[dl];
	for(int i=0;i<dl;i++){
		slot[i]=-1;
	}
	mergeSort(A,0,n-1);
	for(int i=0;i<n;i++){
		for(int j=A[i][2]-1;j>=0;j--){
			if(slot[j]==-1){
				slot[j]=A[i][0];
				break;
			}
		}
	}
	printf("The total profit is %d\n",profit);
	printf("The selected jobs are ");
	for(int i=0;i<dl;i++){
		printf("%d ",slots[i]);
	}
	printf("\n");
}
