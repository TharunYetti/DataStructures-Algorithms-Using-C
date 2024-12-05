#include <stdio.h>
void sumOfSubsets(int s,int k,int r,int *w,int *x,int rs){
	x[k]=w[k];
	//printf("%d\n",s);
	//printf("%d\n%d\n",s+w[k],r);
	//printf("%d\n",k);
	if(s+w[k]==rs){
		for(int i=0;i<=k;i++){
			printf("%d",x[i]);
		}
		printf("\n");
	}
	else 
	*/
	if(s+w[k+1]+w[k]<=r){
		sumOfSubsets(s+w[k],k+1,r-s-w[k],w,x,rs);
	}
	if((s+r-w[k]>=r)&&(s+w[k+1]<=r)){
		x[k]=0;
		sumOfSubsets(s,k+1,r-s-w[k],w,x,rs);
	}
}
void main(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int x[n];
	sumOfSubsets(0,0,8,ar,x,8);

}
