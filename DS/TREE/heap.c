#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int A[11]={100,6,70,34,15,23,68,10,30,60,48};
int l,r,largest,temp,heapSize=11,arr_length=11;
int B[11]={100,6,70,50,60,65,68,35,30,49,48};
int T[11]={22,34,54,12,76,45,87,98,46,33,18};
int MPQ[12]={100,34,70,30,15,23,68,10,6,60,48,0};
void MAX_HEAPIFY(int C[],int i,int heapSize){
	l=2*i;r=2*i+1;
	if(l<=heapSize && C[l-1]>C[i-1]) largest=l;
	else largest=i;
	if(r<=heapSize && C[r-1]>C[largest-1]) largest=r;
	if(largest!=i){
		temp=C[largest-1];
		C[largest-1]=C[i-1];
		C[i-1]=temp;	
		MAX_HEAPIFY(C,largest,heapSize);
	}
}
void BUILD_MAX_HEAP(int D[],int n){
	int i=n/2;
	while(i>0){
		MAX_HEAPIFY(D,i,n);
		i--;
	}
}
void HEAP_SORT(int E[],int n){
	BUILD_MAX_HEAP(E,n);
	int i=n;
	while(i>1){
		int temp=E[0];
		E[0]=E[i-1];
		E[i-1]=temp;
		i--;
		MAX_HEAPIFY(E,1,i);
	}
}
int MAXIMUM(int K[]){
	return K[1-1];
}
int DELETE(int K[]){
	int del=MAXIMUM(K);
	K[1-1]=K[heapSize-1];
	//heapSize should decrease
	MAX_HEAPIFY(K,1,heapSize);
	return del;
}
void INC_P(int K[],int i,int new_key){
	if(K[i-1]>new_key){
		printf("No need for increasing priority\n");
		return;
	}
	K[i-1]=new_key;
	while(i!=1 && K[i-1]>K[i/2-1]){
		int temp=K[i-1];
		K[i-1]=K[i/2-1];
		K[i/2-1]=temp;
		i=i/2;
	}
}
void INSERT(int K[],int new_key){
	int temp=heapSize;
	temp=temp+1;
	A[temp-1]=new_key;
	INC_P(K,temp,new_key);
}
void main(){
	int data,ch=0;
	printf("Printing array 1 for HEAPIFY OPERATION\n");
			for(int i=0;i<heapSize;i++){
				printf("%d ",B[i]);
			}
		printf("\nHEAPIFIED\n");
		MAX_HEAPIFY(B,2,heapSize);
		for(int i=0;i<heapSize;i++){
			printf("%d ",B[i]);
		}
	printf("\nPrinting Array 2 for BUILD_MAX_HEAP Operation\n");
		for(int i=0;i<heapSize;i++){
			printf("%d ",A[i]);
		}
		BUILD_MAX_HEAP(A,arr_length);
		printf("\nMAX_HEAP BUILDED\n");
		for(int i=0;i<heapSize;i++){
			printf("%d ",A[i]);
		}
		printf("\n");
	printf("Printing array 3 for HEAP_SORT Operation\n");
		for(int i=0;i<heapSize;i++){
			printf("%d ",T[i]);
		}
		HEAP_SORT(T,arr_length);
		printf("\nHEAP_SORT DONE ON THE ARRAY\n");
		for(int i=0;i<arr_length;i++){
			printf("%d ",T[i]);
		}
		printf("\b\n");
	printf("\n\nPrinting Array on which we use DELETE operation\n");
		for(int i=0;i<heapSize;i++){
			printf("%d ",MPQ[i]);
		}
		DELETE(MPQ);
		printf("\nDELETED INTO THE ARRAY\n");
		for(int i=0;i<heapSize-1;i++){
			printf("%d ",MPQ[i]);
		}
		printf("\b\n");
	printf("\n\nPrinting Array on which we use INsert operation\n");
		for(int i=0;i<heapSize;i++){
			printf("%d ",MPQ[i]);
		}
		INSERT(MPQ,32);
		printf("\nINSERTED INTO THE ARRAY\n");
		for(int i=0;i<(12);i++){
			printf("%d ",MPQ[i]);
		}
		printf("\b\n");
}
