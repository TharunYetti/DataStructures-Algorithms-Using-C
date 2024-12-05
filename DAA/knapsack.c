#include <stdio.h>
int B[100][3];
void merge(int a[][3],int l,int m,int h){
	int i=l,j=m+1,k=l;
	while(i<=m && j<=h){
		if(a[i][2]/a[i][1]>a[j][2]/a[j][1]){
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
void printitems(int items[][3],int n){
	printf("\nItems   :");
	for(int i=0;i<n;i++){
		printf("  I%d ",items[i][0]);
	}
	printf("\nWeights :");
	for(int i=0;i<n;i++){
		printf("  %d  ",items[i][1]);
	}
	printf("\nProfits :");
	for(int i=0;i<n;i++){
		printf("  %d  ",items[i][2]);
	}
	printf("\n");
}
void printBag(int bag[],int n){
	printf("\nBag   :");
	for(int i=0;i<n;i++){
		printf("I%d  ",bag[i]);
	}
	printf("\n");
}
void main(){
	printf("How many items do you want to enter:");
	int n;
	scanf("%d",&n);
	int items[n][3];
	int dl=0;
	for(int i=0;i<n;i++){
		items[i][0]=i+1;
		printf("Enter the weight of item %d:",i+1);
		scanf("%d",&items[i][1]);
		printf("Enter the profit of item %d:",i+1);
		scanf("%d",&items[i][2]);
	}
	int cap;
	printf("Enter the capacity of the bag:");
	scanf("%d",&cap);
	mergeSort(items,0,n-1);
	printitems(items,n);
	int bag[n],t=0;
	double tf=0;
	for(int i=0;i<n && cap!=0;i++){
		if(items[i][1]<cap){
			tf+=items[i][2];
			cap-=items[i][1];
			bag[t++]=items[i][0];
		}
		else{
			tf+=(cap*items[i][2]/items[i][1]);
			bag[t++]=items[i][0];
			cap=0;
		}
	}
	printBag(bag,t);
}
