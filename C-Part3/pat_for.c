#include <stdio.h>
int inp;
void main(){
	printf("Enter A number:");
	scanf("%d",&inp);
	for(int i=1;i<=inp;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");	
	}
}
