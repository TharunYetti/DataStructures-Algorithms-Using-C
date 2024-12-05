#include <stdio.h>
void main(){
	printf("Enter a number of rows:");
	int rows;
	scanf("%d",&rows);
	//type 1
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	//type 2
	for(int i=1;i<=rows;i++){
		for(int k=1;k<=(rows-i);k++){
			printf("  ");
		}
		for(int l=1;l<=i;l++){
			/*if(l==1 || l==i|| i==rows)
				printf("* ");
			else
				printf("- ");
			*/
			printf("%d ",l);
		}
		printf("\n");
	}
	
}

