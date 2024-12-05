#include <stdio.h>
int inp;
void main(){
	printf("Enter a number:");
	scanf("%d",&inp);
	for(int i=1;i<=inp;i++){
		for(int j=1;j<=(inp-i);j++){
			printf(" "); // or printf("  ") for right angle triangle
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
