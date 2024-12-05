#include <stdio.h>
int fact(int);
void main(){
	int rows;
	printf("Enter upto how many rows do you want the triangle:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=0;j<(rows-i-1);j++){
			printf(" ");
		}
		for(int c=0;c<i;c++){
			printf("%d",fact(i)/fact(c)*fact(i-c));
		}
		printf("\n");
	}
}
int fact(int n){
	int mult=1;
	for(int i=1;i<=n;i++){
		mult=mult*i;
	}
	return mult;
}

