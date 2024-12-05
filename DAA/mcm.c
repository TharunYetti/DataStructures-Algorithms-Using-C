#include <stdio.h>
void main(){
	int n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int P[n];
	printf("Enter the values: ");
	for(int i=0;i<n;i++){
		scanf("%d",&P[i]);
	}
	int A[n-1][n-1];
	for(int i=0;i<n-1;i++) for(int j=0;j<n-1;j++) if(i==j) A[i][j]=0;
	for(int d=1;d<n-1;d++){
		for(int i=0;i<n-1-d;i++){
			int j=i+d;
			int min=99999,m;
			for(int k=i;k<j;k++){
				m=A[i][k]+A[k+1][j]+P[i]*P[k+1]*P[j+1];
				if(m<min) min=m;
			}
			A[i][j]=min;
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(j>=i) printf("%d\t",A[i][j]);
			else printf("\t");
		}
		printf("\n");
	}
}
