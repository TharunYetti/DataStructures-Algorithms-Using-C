#include <stdio.h>
int fact(int);
void main(){
	printf("How many lines do you want:");
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=fact(i)/(fact(j)*fact(i-j));
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<=i)
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int fact(int n){
	int fact=1;
	for(int i=n;i>0;i--){
		fact*=i;
	}
	return fact;
}
