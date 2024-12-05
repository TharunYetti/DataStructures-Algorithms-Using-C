#include <stdio.h>
void main(){
	int i,j,k,rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=(rows-i);j++)
			printf("  ");
		for(k=1;k<=i;k++){
			if(k==1 || k==i || i==rows)
				printf("* ");
			else
				printf("- ");
		}
		printf("\n");
	}
}
