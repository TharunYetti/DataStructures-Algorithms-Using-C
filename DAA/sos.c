#include <stdio.h>
void sos(int s,int rs,int *a,int n,int k,int index,int *x,int FS){
	if(s==FS && n==0){
		for(int i=0;i<k;i++){
			printf("%d ",x[i]);
		}
		printf("\n");
	}
	if(n==0) return;
	x[index]=1;
	sos(s+a[0],rs-a[0],&a[1],n-1,k,index+1,x,FS);	
	x[index]=0;
	sos(s,rs-s,&a[1],n-1,k,index+1,x,size,FS);
}
void main(){
	int n,rsum;
	printf("Enter the size n:");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);	
	}
	printf("Enter the required sum:");
	scanf("%d",&rsum);
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=0;
	}
	printf("The solutions are\n");
	sos(0,sum,a,n,0,x,n,sum);
	printf("Thank you\n");
}
