#include <stdio.h>
int fact(int);
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int m[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			m[i][j]=fact(i)/( (fact(i-j)) * (fact(j)));
		}
	}
	printf("The Pascal's Triangle is\n");
	for(int i=0;i<n;i++){
		for(int k=1;k<(n-i);k++)
			printf(" ");
		for(int j=0;j<n;j++){
			if(j>=i+1)
				continue;
			if(m[i][j]!=0){
				printf("%d ",m[i][j]);
			}
			/*else{
				printf("  ");
			}*/
		}
		printf("\n");
	}
}
int fact(int a){
	int fact=1;
	for(int i=1;i<=a;i++){
		fact*=i;
	}
	return fact;
}
