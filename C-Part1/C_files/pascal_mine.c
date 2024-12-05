#include <stdio.h>
int fact(int n){
	int fact=1;
	for(int i=2;i<=n;i++)
		fact*=i;
	return fact;
}
void main(){
	printf("ENter a number:");
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			arr[i][j]=fact(i)/( (fact(j))*(fact(i-j)) );
	}
	for(int i=0;i<n;i++){
		for(int k=1;k<=(n-i);k++){
			printf(" ");
		}
		for(int j=0;j<n;j++){
			if(j>=i+1)
				continue;
			if(arr[i][j]!=0)
				printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

